#include "entry.h"
#include "ui_entry.h"

entry::entry(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::entry)
{
    ui->setupUi(this);
}

entry::~entry()
{
    delete ui;
}
