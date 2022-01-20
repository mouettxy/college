#include "reciever.h"

#include <QLabel>
#include <QPushButton>
#include <QUdpSocket>
#include <QVBoxLayout>

Receiver::Receiver(QWidget *parent) : QWidget(parent) {
  statusLabel = new QLabel(tr("Listening for broadcasted messages"));
  statusLabel->setWordWrap(true);
  auto quitButton = new QPushButton(tr("&Quit"));
  udpSocket = new QUdpSocket(this);
  udpSocket->bind(45454, QUdpSocket::ShareAddress);

  connect(udpSocket, &QUdpSocket::readyRead, this,
          &Receiver::processPendingDatagrams);
  connect(quitButton, &QPushButton::clicked, this, &Receiver::close);

  auto buttonLayout = new QHBoxLayout;
  buttonLayout->addStretch(1);
  buttonLayout->addWidget(quitButton);
  buttonLayout->addStretch(1);
  auto mainLayout = new QVBoxLayout;
  mainLayout->addWidget(statusLabel);
  mainLayout->addLayout(buttonLayout);
  setLayout(mainLayout);
}

Receiver::~Receiver() {}

void Receiver::processPendingDatagrams() {
  QByteArray datagram;

  while (udpSocket->hasPendingDatagrams()) {
    datagram.resize(int(udpSocket->pendingDatagramSize()));
    udpSocket->readDatagram(datagram.data(), datagram.size());
    statusLabel->setText(
        tr("Received datagram: \"%1\"").arg(datagram.constData()));
  }
}
