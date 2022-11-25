#include "InConTool.h"
#include <QRegularExpressionValidator>

InConTool::InConTool(QWidget *parent)
    : QMainWindow(parent), ui(new Ui_InConTool)
{
    ui->setupUi(this);

    validator_bin = new QRegularExpressionValidator(QRegularExpression(R"(-?[0-1]*)"), this);
    ui->editBin->setValidator(validator_bin);

    validator_oct = new QRegularExpressionValidator(QRegularExpression(R"(-?[0-7]*)"), this);
    ui->editOct->setValidator(validator_oct);

    validator_dec = new QRegularExpressionValidator(QRegularExpression(R"(-?\d+)"), this);
    ui->editDec->setValidator(validator_dec);

    validator_hex = new QRegularExpressionValidator(QRegularExpression(R"(-?[0-9A-F|a-f]+)"), this);
    ui->editHex->setValidator(validator_hex);
}

InConTool::~InConTool()
{
    delete ui;
    delete validator_bin;
    delete validator_oct;
    delete validator_dec;
    delete validator_hex;
}

void InConTool::on_editDec_textChanged(const QString &arg1)
{
    int value = arg1.toInt();
    ui->editBin->setText(QString::number(value, 2));
    ui->editOct->setText(QString::number(value, 8));
    ui->editHex->setText(QString::number(value, 16).toUpper());
}


void InConTool::on_editBin_textChanged(const QString &arg1)
{
    bool ok;
    int value = arg1.toInt(&ok, 2);
    ui->editDec->setText(QString::number(value, 10));
    ui->editOct->setText(QString::number(value, 8));
    ui->editHex->setText(QString::number(value, 16).toUpper());
}


void InConTool::on_editOct_textChanged(const QString &arg1)
{
    bool ok;
    int value = arg1.toInt(&ok, 8);
    ui->editBin->setText(QString::number(value, 2));
    ui->editDec->setText(QString::number(value, 10));
    ui->editHex->setText(QString::number(value, 16).toUpper());
}


void InConTool::on_editHex_textChanged(const QString &arg1)
{
    bool ok;
    int value = arg1.toInt(&ok, 16);
    ui->editBin->setText(QString::number(value, 2));
    ui->editOct->setText(QString::number(value, 8));
    ui->editDec->setText(QString::number(value, 10));
}

