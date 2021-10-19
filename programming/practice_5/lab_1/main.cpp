#include <QApplication>
#include <QHBoxLayout>
#include <QPushButton>
#include <QSlider>
#include <QSpinBox>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QWidget *hbox = new QWidget();
  hbox->setWindowTitle("Введите Ваш Возраст");

  QSpinBox *spinBox = new QSpinBox(hbox);
  QSlider *slider = new QSlider(Qt::Horizontal, hbox);

  spinBox->setRange(0, 130);
  slider->setRange(0, 130);
  spinBox->setValue(35);

  QPushButton *btn = new QPushButton("Завершение", hbox);
  QVBoxLayout *layout = new QVBoxLayout;

  layout->setContentsMargins(5, 5, 5, 5);
  layout->setSpacing(5);
  hbox->setLayout(layout);
  layout->addWidget(spinBox);
  layout->addWidget(slider);
  layout->addWidget(btn);

  QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox,
                   SLOT(setValue(int)));

  QObject::connect(btn, SIGNAL(clicked(bool)), hbox, SLOT(close()));
  hbox->show();
  return app.exec();
}
