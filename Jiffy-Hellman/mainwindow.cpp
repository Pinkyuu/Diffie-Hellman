#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "math.h"
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


void MainWindow::on_genA_clicked()
{
    double A;
    A = rand();
    QString A_temp;
    A_temp = QString::number(A);
    ui->generation_A->setText(A_temp);
}


void MainWindow::on_genB_clicked()
{
    double B;
    B = rand();
    QString B_temp;
    B_temp = QString::number(B);
    ui->generation_B->setText(B_temp);
}


void MainWindow::on_setWorld_clicked()
{
    if (ui->generation_A->text().isEmpty() || ui->generation_B->text().isEmpty())
    {
        QMessageBox::warning(this,"Ошибка", "Сначала сгенерируйте числа A и B");
    }
    else
    {
        double g = ui->World_g->text().toDouble(); // Общая переменные
        int p = ui->World_p->text().toInt(); // Общая переменная
        double A = ui->generation_A->text().toDouble(); // Сгенерированное число A
        double B = ui->generation_B->text().toDouble(); // Сгенерированное число B
        long long Open_A; // Открытый ключ А
        long long Open_B; // Открытый ключ Б
        long long temp_a;
        long long temp_b;
        long long Close_A;
        long long Close_B;
        Open_A = temp_a = g * g;
           for (int i = 2; i <= A/2; i++)
           {
               Open_A = Open_A * temp_a % p;
           }
        Open_B = temp_b = g * g;
           for (int i = 2; i <= B/2; i++)
           {
               Open_B = Open_B * temp_b % p;
           }
        Close_A = temp_a = Open_B * Open_B;
           for (int i = 2; i <= A/2; i++)
           {
               Close_A = Close_A * temp_a % p;
           }
        Close_B = temp_b = Open_A * Open_A;
          for (int i = 2; i <= B/2; i++)
           {
               Close_B = Close_B * temp_b % p;
           }
          ui->A_K->setText(QString::number(Close_A));
          ui->B_K->setText(QString::number(Close_B));

    }

}

