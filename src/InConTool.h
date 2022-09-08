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

    void on_btnBin_clicked();
    void on_btnDec_clicked();
    void on_btnOct_clicked();
    void on_btnHex_clicked();

private:
    Ui_InConTool *ui;
};