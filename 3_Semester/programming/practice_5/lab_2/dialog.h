#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include "ui.h"

class Dialog : public QDialog, public Ui::Dialog {
  Q_OBJECT
 public:
  Dialog(QWidget* parent = 0);
 private slots:
  void onExitClicked();
};

#endif  // DIALOG_H
