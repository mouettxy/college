#include "calcDialog.h"

#include <QGridLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QVBoxLayout>
#include <QVector>
#include <cmath>

#define DIV 10
#define MUL 11
#define MINUS 12
#define PLUS 13
#define INVERSE 14
#define DOT 15
#define SIN 101
#define COS 102
#define LOG 103
#define POW 104
#define EQ 20
#define BKSP 30
#define CLR 31
#define CLR_ALL 32
#define GRID_KEYS 20

double log(double a, double b) { return log(b) / log(a); }

struct BtnDescr {
  QString text;
  int id;

  BtnDescr() { id = 0; };
  BtnDescr(const QString &str, int i) {
    text = str;
    id = i;
  };
};

QVector<BtnDescr> btnDescr;

void InitBtnDescrArray() {
  btnDescr.push_back(BtnDescr("7", 7));
  btnDescr.push_back(BtnDescr("8", 8));
  btnDescr.push_back(BtnDescr("9", 9));
  btnDescr.push_back(BtnDescr("/", DIV));
  btnDescr.push_back(BtnDescr("4", 4));
  btnDescr.push_back(BtnDescr("5", 5));
  btnDescr.push_back(BtnDescr("6", 6));
  btnDescr.push_back(BtnDescr("*", MUL));
  btnDescr.push_back(BtnDescr("1", 1));
  btnDescr.push_back(BtnDescr("2", 2));
  btnDescr.push_back(BtnDescr("3", 3));
  btnDescr.push_back(BtnDescr("-", MINUS));
  btnDescr.push_back(BtnDescr("0", 0));
  btnDescr.push_back(BtnDescr("sin(x)", SIN));
  btnDescr.push_back(BtnDescr("cos(x)", COS));
  btnDescr.push_back(BtnDescr(".", DOT));
  btnDescr.push_back(BtnDescr("-/+", INVERSE));
  btnDescr.push_back(BtnDescr("log_y^x", LOG));
  btnDescr.push_back(BtnDescr("pow(x, y)", POW));
  btnDescr.push_back(BtnDescr("+", PLUS));
  btnDescr.push_back(BtnDescr("<-", BKSP));
  btnDescr.push_back(BtnDescr("CE", CLR));
  btnDescr.push_back(BtnDescr("C", CLR_ALL));
  btnDescr.push_back(BtnDescr("=", EQ));
}

CalcDialog::CalcDialog(QWidget *parent) {
  initNum();
  InitBtnDescrArray();

  m_pLineEdit = new QLineEdit(this);
  m_pLineEdit->setReadOnly(true);
  m_pSignalMapper = new QSignalMapper(this);

  QGridLayout *gridLayout = new QGridLayout();
  QHBoxLayout *bccKeysLayout = new QHBoxLayout();
  QHBoxLayout *mainKeysLayout = new QHBoxLayout();
  QVBoxLayout *dlgLayout = new QVBoxLayout();

  for (int i = 0; i < btnDescr.size(); i++) {
    QPushButton *button = new QPushButton(btnDescr[i].text);

    if (i >= GRID_KEYS + 3 || i < GRID_KEYS || i > 100) {
      button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    }

    if (btnDescr[i].id >= 10) {
      QFont fnt = button->font();
      fnt.setPointSize(fnt.pointSize() + 4);
      button->setFont(fnt);
    }

    m_pSignalMapper->connect(button, SIGNAL(clicked()), m_pSignalMapper,
                             SLOT(map()));
    m_pSignalMapper->setMapping(button, btnDescr[i].id);

    if (i < GRID_KEYS) {
      gridLayout->addWidget(button, i / 4, i % 4);
    } else if (i < GRID_KEYS + 3) {
      bccKeysLayout->addWidget(button);
    } else {
      mainKeysLayout->addLayout(gridLayout);
      mainKeysLayout->addWidget(button);
    }
  }

  connect(m_pSignalMapper, SIGNAL(mappedInt(int)), this,
          SLOT(clicked(int)));  // fixed here

  dlgLayout->addWidget(m_pLineEdit);
  dlgLayout->addLayout(bccKeysLayout);
  dlgLayout->addLayout(mainKeysLayout);

  setLayout(dlgLayout);
  m_pLineEdit->setText("0");
}

void CalcDialog::clicked(int id) {
  switch (id) {
    case INVERSE: {
      setNumEdit(getNumEdit() * -1.0);
      break;
    };
    case DOT: {
      QString str = m_pLineEdit->text();
      str.append(".");
      bool ok = false;
      str.toDouble(&ok);
      if (ok) m_pLineEdit->setText(str);
      break;
    };
    case LOG:
    case POW:
    case COS:
    case SIN:
    case DIV:
    case MUL:
    case PLUS:
    case MINUS:
    case EQ: {
      calcPrevOp(id);
      break;
    }
    case CLR_ALL:
      initNum();
    case CLR: {
      setNumEdit(0);
      break;
    }
    case BKSP: {
      checkOpPerf();
      QString str = m_pLineEdit->text();
      if (str.length()) {
        str.remove(str.length() - 1, 1);
        m_pLineEdit->setText(str);
      }
      break;
    }
    default: {
      checkOpPerf();
      QString sId;

      sId.setNum(id);
      QString str = m_pLineEdit->text();
      if (str == "0")
        str = sId;
      else
        str.append(sId);
      m_pLineEdit->setText(str);
    }
  };
};

double CalcDialog::getNumEdit() {
  double result;
  QString str = m_pLineEdit->text();
  result = str.toDouble();
  return result;
};

void CalcDialog::setNumEdit(double num) {
  QString str;
  str.setNum(num, 'g', 25);
  m_pLineEdit->setText(str);
};

void CalcDialog::calcPrevOp(int curOp) {
  double num = getNumEdit();
  switch (m_Op) {
    case DIV: {
      if (num != 0)
        m_Val /= num;
      else
        m_Val = 0;
      break;
    }
    case MUL: {
      m_Val *= num;
      break;
    }
    case PLUS: {
      m_Val += num;
      break;
    }
    case MINUS: {
      m_Val -= num;
      break;
    }
    case EQ: {
      m_Val = num;
      break;
    }
    case SIN: {
      m_Val = std::sin(num);
    }
    case COS: {
      m_Val = std::cos(num);
    }
    case LOG: {
      m_Val = log(m_Val, num);
    }
    case POW: {
      m_Val = std::pow(m_Val, num);
    }
  }
  m_Op = curOp;
  setNumEdit(m_Val);
  m_bPerf = true;
};

void CalcDialog::checkOpPerf() {
  if (m_bPerf) {
    m_pLineEdit->clear();
    m_bPerf = false;
  };
};

void CalcDialog::initNum() {
  m_bPerf = false;
  m_Val = 0;
  m_Op = EQ;
};
