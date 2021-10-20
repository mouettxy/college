#ifndef APP_H
#define APP_H

#include <QDialog>
#include <QLineEdit>
#include <QTextEdit>

class App : public QDialog {
  Q_OBJECT

 public:
  App(QWidget* parent = 0);
  virtual ~App(){};

 protected:
  QTextEdit* m_textBox;
  QLineEdit* m_input;
  bool m_isUppercase;

 private slots:
  void handleClick();
};
#endif  // MAINWINDOW_H
