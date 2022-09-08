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

void InConTool::on_btnBin_clicked()
{
    QString str = ui->editBin->text();
    bool ok;
    int value = str.toInt(&ok, 2);
    ui->editDec->setText(QString::number(value, 10));
    ui->editOct->setText(QString::number(value, 8));
    ui->editHex->setText(QString::number(value, 16).toUpper());
}

void InConTool::on_btnDec_clicked()
{
    QString str = ui->editDec->text();
    int value = str.toInt();
    ui->editBin->setText(QString::number(value, 2));
    ui->editOct->setText(QString::number(value, 8));
    ui->editHex->setText(QString::number(value, 16).toUpper());
}

void InConTool::on_btnOct_clicked()
{
    QString str = ui->editOct->text();
    bool ok;
    int value = str.toInt(&ok, 8);
    ui->editBin->setText(QString::number(value, 2));
    ui->editDec->setText(QString::number(value, 10));
    ui->editHex->setText(QString::number(value, 16).toUpper());
}

void InConTool::on_btnHex_clicked()
{
    QString str = ui->editHex->text();
    bool ok;
    int value = str.toInt(&ok, 16);
    ui->editBin->setText(QString::number(value, 2));
    ui->editOct->setText(QString::number(value, 8));
    ui->editDec->setText(QString::number(value, 10));
}
