#ifndef SENDER_H
#define SENDER_H

#include <QLineEdit>
#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE

class QLineEdit;
class QPushButton;
class QUdpSocket;

QT_END_NAMESPACE

class Sender : public QWidget {
  Q_OBJECT

 public:
  Sender(QWidget *parent = nullptr);
  ~Sender();

 private slots:
  void sendMessage();
  void sendDatagram(QString message);

 private:
  QLineEdit *lineEdit = nullptr;
  QPushButton *startButton = nullptr;
  QUdpSocket *udpSocket = nullptr;
};
#endif  // SENDER_H
