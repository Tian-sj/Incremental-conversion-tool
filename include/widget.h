#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_editBin_textChanged(const QString &arg1);

    void on_editOct_textChanged(const QString &arg1);

    void on_editDec_textChanged(const QString &arg1);

    void on_editHex_textChanged(const QString &arg1);

private:
    QValidator *validator_bin;
    QValidator *validator_oct;
    QValidator *validator_dec;
    QValidator *validator_hex;

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
