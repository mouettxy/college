#include <QApplication>
#include <QSplitter>

#include "dialog.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QSplitter *splitter = new QSplitter(Qt::Vertical);
  Dialog *dialog1 = new Dialog();
  Dialog *dialog2 = new Dialog();

  splitter->addWidget(dialog1);
  splitter->addWidget(dialog2);
  splitter->show();

  return app.exec();
}
