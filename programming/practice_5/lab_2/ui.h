/********************************************************************************
** Form generated from reading UI file 'lab_2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB_2_H
#define UI_LAB_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QDial *dial;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *btnExit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(453, 261);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dial = new QDial(Dialog);
        dial->setObjectName(QString::fromUtf8("dial"));

        verticalLayout->addWidget(dial);

        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        btnExit = new QPushButton(Dialog);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        horizontalLayout_2->addWidget(btnExit);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(dial, &QDial::sliderMoved, spinBox, &QSpinBox::setValue);
        QObject::connect(spinBox, &QSpinBox::textChanged, textEdit, &QTextEdit::append);
        QObject::connect(spinBox, &QSpinBox::valueChanged, dial, &QDial::setValue);
        QObject::connect(btnExit, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203 ->", nullptr));
        btnExit->setText(QCoreApplication::translate("Dialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB_2_H
