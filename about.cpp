#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    setFixedSize(size());
}

about::~about()
{
    delete ui;
}
