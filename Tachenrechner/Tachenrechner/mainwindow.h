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

private:
    Ui::MainWindow *ui;
    double ergebnis;
    QString op;
    QList<int> z;
//printbefehl wie in hallo
private slots:
    void CMD0Clicked();
    void CMD1Clicked();
    void CMD2Clicked();
    void CMD3Clicked();
    void CMD4Clicked();
    void CMD5Clicked();
    void CMD6Clicked();
    void CMD7Clicked();
    void CMD8Clicked();
    void CMD9Clicked();
    void CMDminusClicked();
    void CMDplusClicked();
    void CMDgeteiltClicked();
    void CMDmalClicked();
    void CMDistgleichClicked();
    void CMDbackClicked();
};
#endif // MAINWINDOW_H
