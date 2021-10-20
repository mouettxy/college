#include "app.h"

#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>

App::App(QWidget *parent) {
  QVBoxLayout *layout = new QVBoxLayout();
  m_isUppercase = false;
  m_input = new QLineEdit(this);
  m_textBox = new QTextEdit(this);
  QPushButton *btn = new QPushButton("Convert");

  layout->addWidget(m_input);
  layout->addWidget(btn);
  layout->addWidget(m_textBox);

  connect(btn, SIGNAL(clicked()), this, SLOT(handleClick()));

  setLayout(layout);
}

void App::handleClick() {
  if (m_input->text().length() > 0) {
    if (m_isUppercase) {
      m_textBox->append(m_input->text().toLower());
      m_isUppercase = false;
    } else {
      m_textBox->append(m_input->text().toUpper());
      m_isUppercase = true;
    }
  }
}
