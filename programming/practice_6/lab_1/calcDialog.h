#ifndef _CALC_DIALOG_H_
#define _CALC_DIALOG_H_

#include <QDialog>
#include <QLineEdit>
#include <QSignalMapper>

class CalcDialog : public QDialog {
  Q_OBJECT

 public:
  CalcDialog(QWidget* parent = 0);
  virtual ~CalcDialog(){};

 protected:
  QSignalMapper* m_pSignalMapper;
  QLineEdit* m_pLineEdit;
  double m_Val;  ///< Значение, с которым будет выполнена операция
  int m_Op;      ///< Код нажатой операции
  bool m_bPerf;  ///< Операция была выполнена. Надо очистить поле ввода void
  void initNum();  ///< Инициализировать переменные, связанные с вычислениями
  double getNumEdit();      ///< Получить число из m pLineEdit
  void setNumEdit(double);  ///< Отобразить число в m pLineEdit
  void calcPrevOp(int curOp);
  void checkOpPerf();
 private slots:
  void clicked(int id);
};

#endif
