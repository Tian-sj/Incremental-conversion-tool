#pragma once

#include <QtWidgets/QWidget>
#include "ui_smapl_4_1.h"

class smapl_4_1 : public QWidget
{
	Q_OBJECT

public:
	smapl_4_1(QWidget* parent = Q_NULLPTR);
	~smapl_4_1();

private:
	Ui::smapl_4_1Class ui;

private:
	QValidator* validator_bin;
	QValidator* validator_oct;
	QValidator* validator_dec;
	QValidator* validator_hex;

private slots:

	void on_btnBin_clicked();
	void on_btnDec_clicked();
	void on_btnOct_clicked();
	void on_btnHex_clicked();
};
