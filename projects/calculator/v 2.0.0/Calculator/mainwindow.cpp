#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

static QString str = "";
static bool hasDot = false;
static bool hasResult = false;
static double first[2];
static double result;
static int i = 0;
static char sign;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_b1_clicked()
{
    str = ui->screen->text() + "1";
    ui->screen->setText(str);
}

void MainWindow::on_b2_clicked()
{
    str = ui->screen->text() + "2";
    ui->screen->setText(str);
}

void MainWindow::on_b3_clicked()
{
    str = ui->screen->text() + "3";
    ui->screen->setText(str);
}

void MainWindow::on_b4_clicked()
{
    str = ui->screen->text() + "4";
    ui->screen->setText(str);
}

void MainWindow::on_b5_clicked()
{
    str = ui->screen->text() + "5";
    ui->screen->setText(str);
}

void MainWindow::on_b6_clicked()
{
    str = ui->screen->text() + "6";
    ui->screen->setText(str);
}

void MainWindow::on_b7_clicked()
{
    str = ui->screen->text() + "7";
    ui->screen->setText(str);
}

void MainWindow::on_b8_clicked()
{
    str = ui->screen->text() + "8";
    ui->screen->setText(str);
}

void MainWindow::on_b9_clicked()
{
    str = ui->screen->text() + "9";
    ui->screen->setText(str);
}

void MainWindow::on_b0_clicked()
{
    str = ui->screen->text() + "0";
    ui->screen->setText(str);
}

void MainWindow::on_b000_clicked()
{
    str = ui->screen->text() + "000";
    ui->screen->setText(str);
}

void MainWindow::on_bdot_clicked()
{
    if(!hasDot){
        if(str == "")
            ui->screen->setText("0");
        str = ui->screen->text() + ".";
        hasDot = true;
        ui->screen->setText(str);
    }
}









void MainWindow::on_bplus_clicked()
{
    if(str == "" && ui->label->text() != ""){

        ui->label->setText(QString::number(result) + " +");
        sign = '+';
        if(!hasResult){
            ui->label->setText("+");
            return;
        }
    }
    if(str != ""){
        str = ui->screen->text();
        first[i] = str.toDouble();
        i++;

        if(i == 2)
            i = 0;

        str = "";
        ui->screen->setText("");
        hasDot = false;

    if(i == 0 and !hasResult){

        i = 1;
        hasResult = true;
        switch(sign){

            case '+': result = first[0] + first[1];
                break;
            case '-': result = first[0] - first[1];
                break;
            case '*': result = first[0] * first[1];
                break;
            case '/': result = first[0] / first[1];
                break;
        default: QMessageBox::warning(this,"Sign Error","Error at line 150:\nVar char sign equal NULL!\nContact the developer for more info.");
                 close();
        }
    }
    if(i == 0 && hasResult){

        i = 1;
        switch(sign){

            case '+': result = result + first[1];
                break;
            case '-': result = result - first[1];
                break;
            case '*': result = result * first[1];
                break;
            case '/': result = result / first[1];
                break;
        default: QMessageBox::warning(this,"Sign Error","Error at line 167:\nVar char sign equal NULL!\nContact the developer for more info.");
                 close();
        }

    }
    sign = '+';
    ui->label->setText("+");
    if(i == 1 && hasResult){

        ui->label->setText(QString::number(result) + " +");
    }
    }
}








void MainWindow::on_bmin_clicked()
{
    if(str == "" && ui->label->text() != ""){

        ui->label->setText(QString::number(result) + " -");
        sign = '-';
        if(!hasResult){
            ui->label->setText("-");
            return;
        }
    }
    if(str != ""){
        str = ui->screen->text();
        first[i] = str.toDouble();
        i++;

        if(i == 2)
            i = 0;

        str = "";
        ui->screen->setText("");
        hasDot = false;

    if(i == 0 and !hasResult){

        i = 1;
        hasResult = true;
        switch(sign){

            case '+': result = first[0] + first[1];
                break;
            case '-': result = first[0] - first[1];
                break;
            case '*': result = first[0] * first[1];
                break;
            case '/': result = first[0] / first[1];
                break;
        default: QMessageBox::warning(this,"Sign Error","Error at line 225:\nVar char sign equal NULL!\nContact the developer for more info.");
                 close();
        }
    }
    if(i == 0 && hasResult){

        i = 1;
        switch(sign){

            case '+': result = result + first[1];
                break;
            case '-': result = result - first[1];
                break;
            case '*': result = result * first[1];
                break;
            case '/': result = result / first[1];
                break;
        default: QMessageBox::warning(this,"Sign Error","Error at line 242:\nVar char sign equal NULL!\nContact the developer for more info.");
                 close();
        }

    }
    sign = '-';
    ui->label->setText("-");
    if(i == 1 && hasResult){

        ui->label->setText(QString::number(result) + " -");
    }
    }
}









void MainWindow::on_bdivide_clicked()
{
    if(str == "" && ui->label->text() != ""){

        ui->label->setText(QString::number(result) + " /");
        sign = '/';
        if(!hasResult){
            ui->label->setText("/");
            return;
        }
    }
    if(str != ""){
        str = ui->screen->text();
        first[i] = str.toDouble();
        i++;

        if(i == 2)
            i = 0;

        str = "";
        ui->screen->setText("");
        hasDot = false;

    if(i == 0 and !hasResult){

        i = 1;
        hasResult = true;
        switch(sign){

            case '+': result = first[0] + first[1];
                break;
            case '-': result = first[0] - first[1];
                break;
            case '*': result = first[0] * first[1];
                break;
            case '/': result = first[0] / first[1];
                break;
        default: QMessageBox::warning(this,"Sign Error","Error at line 301:\nVar char sign equal NULL!\nContact the developer for more info.");
                 close();
        }
    }
    if(i == 0 && hasResult){

        i = 1;
        switch(sign){

            case '+': result = result + first[1];
                break;
            case '-': result = result - first[1];
                break;
            case '*': result = result * first[1];
                break;
            case '/': result = result / first[1];
                break;
        default: QMessageBox::warning(this,"Sign Error","Error at line 318:\nVar char sign equal NULL!\nContact the developer for more info.");
                 close();
        }

    }
    sign = '/';
    ui->label->setText("/");
    if(i == 1 && hasResult){

        ui->label->setText(QString::number(result) + " /");
    }
    }
}









void MainWindow::on_bmulti_clicked()
{
    if(str == "" && ui->label->text() != ""){

        ui->label->setText(QString::number(result) + " *");
        sign = '*';
        if(!hasResult){
            ui->label->setText("*");
            return;
        }
    }
    if(str != ""){
        str = ui->screen->text();
        first[i] = str.toDouble();
        i++;

        if(i == 2)
            i = 0;

        str = "";
        ui->screen->setText("");
        hasDot = false;

    if(i == 0 and !hasResult){

        i = 1;
        hasResult = true;
        switch(sign){

            case '+': result = first[0] + first[1];
                break;
            case '-': result = first[0] - first[1];
                break;
            case '*': result = first[0] * first[1];
                break;
            case '/': result = first[0] / first[1];
                break;
        default: QMessageBox::warning(this,"Sign Error","Error at line 377:\nVar char sign equal NULL!\nContact the developer for more info.");
                 close();
        }
    }
    if(i == 0 && hasResult){

        i = 1;
        switch(sign){

            case '+': result = result + first[1];
                break;
            case '-': result = result - first[1];
                break;
            case '*': result = result * first[1];
                break;
            case '/': result = result / first[1];
                break;
        default: QMessageBox::warning(this,"Sign Error","Error at line 394\nVar char sign equal NULL!\nContact the developer for more info.");
                 close();
        }

    }
    sign = '*';
    ui->label->setText("*");
    if(i == 1 && hasResult){

        ui->label->setText(QString::number(result) + " *");
    }
    }
}







void MainWindow::on_bc_clicked()
{
    str = "";
    ui->screen->setText("");
    hasDot = false;
}







void MainWindow::on_bac_clicked()
{
    result = 0;
    hasDot = false;
    hasResult = false;
    str = "";
    first[0] = 0;
    first[1] = 0;
    ui->screen->setText("");
    sign = 'i';
    ui->label->setText("");
    i = 0;
}






void MainWindow::on_bequal_clicked()
{
    if(str == ""){
        if(hasResult){

            ui->screen->setText(QString::number(result));
            int *temp = new int;
            *temp = result;
            if(*temp == result)
                hasDot = false;
            delete temp;
        }

        if(sign == '+' or sign == '-' or sign == '/' or sign == '*'){
            sign = 'i';
            ui->screen->setText(QString::number(first[0]));
            str = ui->screen->text();
            int *temp = new int;
            *temp = first[0];
            if(*temp == first[0])
                hasDot = false;
            hasResult = false;
            first[0] = 0;
            first[1] = 0;
            result = 0;
            i = 0;
        }

        if(!hasResult){

            ui->screen->setText("0");
            int *temp = new int;
            *temp = first[0];
            if(*temp == first[0])
                hasDot = false;
            delete temp;
        }

        str = ui->screen->text();
        i = 0;
        first[0] = 0;
        first[1] = 0;
        result = 0;
        hasResult = false;
        sign = 'i';
        ui->label->setText("");

        return;
    }

    if(str != ""){

        if(hasResult){

            first[1] = ui->screen->text().toDouble();
            switch(sign){

            case '+': result = result + first[1];
                break;
            case '-': result = result - first[1];
                break;
            case '/': result = result / first[1];
                break;
            case '*': result = result * first[1];
                break;
            default: QMessageBox::warning(this,"Sign Error","Error at line 511:\nVar char sign equal NULL!\nContact the developer for more info.");
                close();
            }
        }

        if(sign != '+' and sign != '-' and sign != '/' and sign != '*'){
            ui->label->setText("");
            return;
        }

        if(!hasResult){

            first[1] = ui->screen->text().toDouble();
            switch(sign){

            case '+': result = first[0] + first[1];
                break;
            case '-': result = first[0] - first[1];
                break;
            case '/': result = first[0] / first[1];
                break;
            case '*': result = first[0] * first[1];
                break;
            default: QMessageBox::warning(this,"Sign Error","Error at line 534:\nVar char sign equal NULL!\nContact the developer for more info.");
                close();
            }
        }

        ui->screen->setText(QString::number(result));
        str = ui->screen->text();
        i = 0;
        first[0] = 0;
        first[1] = 0;
        int *temp = new int;
        *temp = result;
        if(*temp == result)
            hasDot = false;
        delete temp;
        result = 0;
        hasResult = false;
        sign = 'i';
        ui->label->setText("");
    }
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_actionApplication_triggered()
{
    QMessageBox::information(this,"Application","Calculator (GUI)\nVersion: 2.0.0\n\n---------\nGet the source code for free from my git hub:\nhttps://github.com/ilia-abbasi/Cpp-projects/tree/main/projects/calculator");
}

void MainWindow::on_actionDeveloper_triggered()
{
    QMessageBox::information(this,"Developer","Developed by: Ilia Abbasi\nGit Hub: ilia-abbasi");
}
