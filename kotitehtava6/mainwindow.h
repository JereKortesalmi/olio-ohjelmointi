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
    void on_count_clicked();
    void on_reset_clicked();

    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();

private:
    Ui::MainWindow *ui;
    int x=0;
    QString number1,number2;
    int state;
    float result1;
    short operand;

};
#endif // MAINWINDOW_H
