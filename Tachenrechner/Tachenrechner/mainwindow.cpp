#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->CMD0, SIGNAL(clicked()), SLOT(CMD0Clicked()));
    connect(ui->CMD1, SIGNAL(clicked()), SLOT(CMD1Clicked()));
    connect(ui->CMD2, SIGNAL(clicked()), SLOT(CMD2Clicked()));
    connect(ui->CMD3, SIGNAL(clicked()), SLOT(CMD3Clicked()));
    connect(ui->CMD4, SIGNAL(clicked()), SLOT(CMD4Clicked()));
    connect(ui->CMD5, SIGNAL(clicked()), SLOT(CMD5Clicked()));
    connect(ui->CMD6, SIGNAL(clicked()), SLOT(CMD6Clicked()));
    connect(ui->CMD7, SIGNAL(clicked()), SLOT(CMD7Clicked()));
    connect(ui->CMD8, SIGNAL(clicked()), SLOT(CMD8Clicked()));
    connect(ui->CMD9, SIGNAL(clicked()), SLOT(CMD9Clicked()));
    connect(ui->CMDminus, SIGNAL(clicked()), SLOT(CMDminusClicked()));
    connect(ui->CMDback, SIGNAL(clicked()), SLOT(CMDbackClicked()));
    connect(ui->CMDplus, SIGNAL(clicked()), SLOT(CMDplusClicked()));
    connect(ui->CMDmal, SIGNAL(clicked()), SLOT(CMDmalClicked()));
    connect(ui->CMDistgleich, SIGNAL(clicked()), SLOT(CMDistgleichClicked()));
    connect(ui->CMDgeteilt, SIGNAL(clicked()), SLOT(CMDgeteiltClicked()));
    ui->label->setAlignment(Qt::AlignmentFlag::AlignRight | Qt::AlignmentFlag::AlignHCenter);
    ui->label->setFont(QFont("Arial", 18, QFont::Bold));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CMD0Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("0");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMD1Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("1");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMD2Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("2");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMD3Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("3");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMD4Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("4");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMD5Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("5");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMD6Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("6");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMD7Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("7");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMD8Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("8");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMD9Clicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText.append("9");
    ui->label->setText(aktuellerText);
}
void MainWindow::CMDbackClicked()
{
    QString aktuellerText = ui->label->text();
    aktuellerText = aktuellerText.left(aktuellerText.count()-1);
    ui->label->setText(aktuellerText);
}
void MainWindow::CMDminusClicked()
{
    QString vorherigerText = ui->label->text();
    vorherigerText.append(" - ");
    ui->label->setText(vorherigerText);
}
void MainWindow::CMDplusClicked()
{
    QString vorherigerText = ui->label->text();
    vorherigerText.append(" + ");
    ui->label->setText(vorherigerText);
}
void MainWindow::CMDgeteiltClicked()
{
    QString vorherigerText = ui->label->text();
    vorherigerText.append(" / ");
    ui->label->setText(vorherigerText);
}
void MainWindow::CMDmalClicked()
{
    QString vorherigerText = ui->label->text();
    vorherigerText.append(" * ");
    ui->label->setText(vorherigerText);
}
void MainWindow::CMDistgleichClicked()
{
    QString rechnung = ui->label->text();
    QStringList liste = rechnung.split(' ');
    //QString ergebnis = liste[0];
    bool erfolgreich = false;

    for (int i=0; i<liste.count(); i++)
    {
         liste.at(i).toInt(&erfolgreich);
        if (erfolgreich == true)
    {
        z.append(liste.at(i).toInt());
    }
    else {
        op = liste .at(i);
    }
    }

    if (op == "+")
    {
        QString ergebnis = QString::number(z.at(0)+z.at(1));
        ui->label->setText(ergebnis);
    }
    else if (op == "-")
    {
         QString ergebnis = QString::number(z.at(0)-z.at(1));
        ui->label->setText(ergebnis);
    }
    else if (op == "/")
    {
        QString ergebnis = QString::number(z.at(0)/z.at(1));
        ui->label->setText(ergebnis);
    }
    else if (op == "*")
    {
        QString ergebnis = QString::number(z.at(0)*z.at(1));
        ui->label->setText(ergebnis);
        z.clear();
    }
}


