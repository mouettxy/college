#include <dialog.h>

#include <QMessageBox>

Dialog::Dialog(QWidget* parent) : QDialog(parent) {
  setupUi(this);
  connect(btnExit, SIGNAL(clicked()), this, SLOT(onExitClicked()));
};

void Dialog::onExitClicked() {
  if (QMessageBox::question(this, QString(), "Завершить приложение?",
                            QMessageBox::Yes | QMessageBox::No) ==
      QMessageBox::Yes) {
    exit(0);
  }
};
