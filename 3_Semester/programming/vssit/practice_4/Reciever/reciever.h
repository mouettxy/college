#ifndef RECIEVER_H
#define RECIEVER_H

#include <QWidget>

QT_BEGIN_NAMESPACE

namespace Ui {
class Receiver;
}

class QLabel;
class QUdpSocket;

QT_END_NAMESPACE

class Receiver : public QWidget {
  Q_OBJECT

 public:
  Receiver(QWidget *parent = nullptr);
  ~Receiver();

 private:
  QLabel *statusLabel = nullptr;
  QUdpSocket *udpSocket = nullptr;

 private slots:
  void processPendingDatagrams();
};
#endif  // RECIEVER_H
