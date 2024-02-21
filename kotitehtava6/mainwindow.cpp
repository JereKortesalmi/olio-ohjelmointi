#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->N0, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N1, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N2, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N3, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N4, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N5, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N6, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N7, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N8, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N9, SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));

    connect(ui->add, SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->mul, SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->div, SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->sub, SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickHandler()));

    connect(ui->clear, SIGNAL(clicked(bool)),this,SLOT(clearAndEnterClickHandler()));
    connect(ui->enter, SIGNAL(clicked(bool)),this,SLOT(clearAndEnterClickHandler()));

    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_count_clicked()
{
        x++;
        QString s = QString::number(x);
        ui->result->setText(s);
}


void MainWindow::on_reset_clicked()
{
        x=0;
        QString s = QString::number(x);
        ui->result->setText(s);
}

void MainWindow::numberClickedHandler()
{
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name= button->objectName();
        qDebug() << "button name: " << name;

        QStringList parts ;
        parts= name.split(QString(),Qt::SkipEmptyParts);

        if(state == 1) {
            number1 += parts[1];
            ui->num1->setText(number1);
            qDebug()<<number1;
        }

        else if (state == 2)  {
            number2 += parts[1];
            ui->num2->setText(number2);
            qDebug()<<number2;
        }

        else {
            resetLineEdits();
            number1 += parts[1];
            ui->num1->setText(number1);

            state = 1;
        }
}

void MainWindow::clearAndEnterClickHandler()
{
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name= button->objectName();
        qDebug() << "button name: " << name;


        if(name=="clear") {
            operand = 0;
            state = 1;
            resetLineEdits();
        }

        else {
            float n1 = number1.toFloat();
            float n2 = number2.toFloat();

            switch(operand) {

            case 0:
                qDebug() <<operand << " = +";
                result1=n1+n2;
                break;

            case 1:
                qDebug() <<operand << " = -";
                result1=n1-n2;
                break;

            case 2:
                qDebug() <<operand << " = *";
                result1=n1*n2;
                break;

            case 3:
                qDebug() <<operand << " = /";
                result1=n1/n2;
                break;
            }

            ui->result1->setText(QString::number(result1));
            qDebug()<<result1;
            state = 3;

        }

}

void MainWindow::addSubMulDivClickHandler()
{
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name= button->objectName();
        qDebug() << "button name: " << name;

        if(name == "add") {
            operand = 0;
        }
        else if (name == "sub") {
            operand = 1;
        }
        else if (name == "mul") {
            operand = 2;
        }
        else {
            operand = 3;
        }

        state = 2;
        qDebug()<<name;
}

void MainWindow::resetLineEdits()
{
        result1 = 0;
        number1 = "";
        number2 = "";
        ui->num1->setText(number1);
        ui->num2->setText(number2);
        ui->result1->setText(QString::number(result1));
        ui->result->setText("toimii myös");
}
