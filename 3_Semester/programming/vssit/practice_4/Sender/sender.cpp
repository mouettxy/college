#include "sender.h"

#include <QtCore>
#include <QtNetwork>
#include <QtWidgets>

Sender::Sender(QWidget *parent) : QWidget(parent) {
  auto startButton = new QPushButton(tr("&Send"));
  auto quitButton = new QPushButton(tr("&Quit"));

  lineEdit = new QLineEdit;
  auto buttonBox = new QDialogButtonBox;

  udpSocket = new QUdpSocket(this);

  buttonBox->addButton(startButton, QDialogButtonBox::ActionRole);
  buttonBox->addButton(quitButton, QDialogButtonBox::RejectRole);

  lineEdit->setPlaceholderText("Enter message");

  connect(startButton, SIGNAL(clicked()), this, SLOT(sendMessage()));
  connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));

  auto mainLayout = new QVBoxLayout;
  mainLayout->addWidget(lineEdit);
  mainLayout->addWidget(buttonBox);

  setLayout(mainLayout);
  setWindowTitle(tr("Sender"));
}

Sender::~Sender() {}

void Sender::sendMessage() { sendDatagram(lineEdit->text()); }

void Sender::sendDatagram(QString message) {
  QByteArray datagram = message.toUtf8();
  udpSocket->writeDatagram(datagram, QHostAddress::Broadcast, 45454);
}
