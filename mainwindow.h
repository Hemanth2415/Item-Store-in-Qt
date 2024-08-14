#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Cart_clicked();

    void on_back_clicked();

    void on_pay_clicked();

    void on_confirm_clicked();

    void on_new_2_clicked();

    void on_appleadd_clicked();

    void on_bananaadd_clicked();

    void on_mangoadd_clicked();

    void on_orangeadd_clicked();

    void on_fruits_clicked();

    void on_vegetables_clicked();

    void on_chocolates_clicked();

    void on_softdrinks_clicked();

    void on_potatoadd_clicked();

    void on_tomatoadd_clicked();

    void on_cabbageadd_clicked();

    void on_drumstickadd_clicked();

    void on_milkybaradd_clicked();

    void on_dairymilkadd_clicked();

    void on_kitkatadd_clicked();

    void on_munchadd_clicked();

    void on_spriteadd_clicked();

    void on_thumsupadd_clicked();

    void on_cococolaadd_clicked();

    void on_maazaadd_clicked();

    void on_Cart_2_clicked();

    void on_Cart_3_clicked();

    void on_Cart_4_clicked();

    void on_login_clicked();

    void on_clear_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
