#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer=new QTimer();

    ui->progressBar->setRange(0, player1Time);
    ui->progressBar->setValue(0);

    ui->progressBar_2->setRange(0, player2Time);
    ui->progressBar_2->setValue(0);

    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));

    connect(ui->Startgame,SIGNAL(clicked(bool)),this,SLOT(startHandler()));
    connect(ui->Stopgame,SIGNAL(clicked(bool)),this,SLOT(stopHandler()));
    connect(ui->Switchplayer1,SIGNAL(clicked(bool)),this,SLOT(switchHandler()));
    connect(ui->Switchplayer2,SIGNAL(clicked(bool)),this,SLOT(switchHandler()));
    connect(ui->time120s,SIGNAL(clicked(bool)),this,SLOT(startHandler()));
    connect(ui->time5min,SIGNAL(clicked(bool)),this,SLOT(startHandler()));
    setGameInfoText("Select playtime and press start game!", 16);
}



MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer =nullptr;
}



void MainWindow::updateProgressBar()
{
    ui->progressBar->setValue(player1Time);
    ui->progressBar_2->setValue(player2Time);
}



void MainWindow::setGameInfoText(QString a, short fontSize)
{
    ui->textlabel->setText(a);
    QFont font = ui->textlabel->font();
    font.setPointSize(fontSize);
    ui->textlabel->setFont(font);
}




void MainWindow::startHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;

    if(name == "time120s"){
        player1Time = 120;
        player2Time = 120;

        ui->progressBar->setRange(0, player1Time);
        ui->progressBar->setValue(player1Time);

        ui->progressBar_2->setRange(0, player2Time);
        ui->progressBar_2->setValue(player2Time);

        qDebug()<<"Player1time: "<<player1Time;

        setGameInfoText("Ready to play!", 16);


    }else if(name == "time5min"){
        player1Time = 300;
        player2Time = 300;
        ui->progressBar->setRange(0, player1Time);
        ui->progressBar->setValue(player1Time);

        ui->progressBar_2->setRange(0, player2Time);
        ui->progressBar_2->setValue(player2Time);

        qDebug()<<"Player1time: "<<player1Time;

        setGameInfoText("Ready to play!", 16);

    }
    if(name == "Startgame"){
        pQTimer->start(1000);
        state = 1;
        qDebug()<<"Time: "<<x;
        setGameInfoText("Game ongoing", 16);

    }
}



void MainWindow::stopHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;

    if(name == "Stopgame"){
        pQTimer->stop();
        state = 3;
        qDebug()<<"Peli lopetettu!";
        setGameInfoText("Select time again and press start for new game", 16);

        if(player1Time < player2Time){
            pQTimer->stop();
            qDebug()<<"Pelaaja 2 voitti!";
        }

        else if(player2Time < player1Time){
            pQTimer->stop();
            qDebug()<<"Pelaaja 1 voitti!";
        }
    }
}


 void MainWindow::switchHandler()
{
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name = button->objectName();
        qDebug() << "Button name: "<< name;

        if(name == "Switchplayer1"){
            state = 2;
        }else if(name == "Switchplayer2"){
            state = 1;
        }
}



void MainWindow::timeout()
{
        x+=1;
        qDebug()<<"Aikaa kulunut "<<x<<" sekunttia\n";
        if(state == 1){
            player1Time--;
            updateProgressBar();
            qDebug()<<"Player 1 aikaa jäljellä "<<player1Time;
            setGameInfoText("Game ongoing: Player 1 turn",16);

        }else if(state == 2){
            player2Time--;
            updateProgressBar();
            qDebug()<<"Player 2 aikaa jäljellä "<<player2Time;
            setGameInfoText("Game ongoing: Player 2 turn",16);


        }
        if(player1Time == 0){
            pQTimer->stop();
            qDebug()<<"Pelaaja 2 voitti!";
            setGameInfoText("Player 2 WON!", 16);
        } else if(player2Time == 0){
            pQTimer->stop();
            qDebug()<<"Pelaaja 1 voitti!";
            setGameInfoText("Player 1 WON!", 16);
        }
}




