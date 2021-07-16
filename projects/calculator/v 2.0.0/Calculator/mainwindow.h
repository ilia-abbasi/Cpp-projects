#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_b0_clicked();

    void on_b000_clicked();

    void on_bdot_clicked();

    void on_bplus_clicked();

    void on_bmin_clicked();

    void on_bdivide_clicked();

    void on_bmulti_clicked();

    void on_bc_clicked();

    void on_bac_clicked();

    void on_bequal_clicked();

    void on_actionExit_triggered();

    void on_actionApplication_triggered();

    void on_actionDeveloper_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
