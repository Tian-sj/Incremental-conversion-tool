#pragma once
#include "ui_InConTool.h"
#include <QMainWindow>

class InConTool : public QMainWindow
{
    Q_OBJECT

public:
    InConTool(QWidget *parent = nullptr);
    ~InConTool();

private:
    QValidator *validator_bin;
    QValidator *validator_oct;
    QValidator *validator_dec;
    QValidator *validator_hex;

private slots:

    void on_editDec_textChanged(const QString &arg1);

    void on_editBin_textChanged(const QString &arg1);

    void on_editOct_textChanged(const QString &arg1);

    void on_editHex_textChanged(const QString &arg1);

private:
    Ui_InConTool *ui;
};
