#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "footballer.h"
#include "team.h"
#include "ladder.h"
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
int Team::counter = 1;
int counts = 1;
string posi;
Ladder ladder;
Team team;
bool enableAdding = false;
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


void MainWindow::on_actionOpcje_triggered()
{

}


void MainWindow::on_actionStop_triggered()
{

}


void MainWindow::on_actionChange_BackgroundColor_triggered()
{


}


void MainWindow::on_clearList_clicked()
{
ui->footballersList->clear();
team.deleteFootballers();
}


void MainWindow::on_deleteLast_clicked()
{
    QList<QListWidgetItem*> items = ui->footballersList->selectedItems();
    foreach(QListWidgetItem* item, items){
        ui->footballersList->removeItemWidget(item);
        delete item;
        team.remove();
    }


}


void MainWindow::on_addFootballer_clicked()
{
    string fname=ui->typefirstname->text().toUtf8().constData();
    string lname=ui->typelastname->text().toUtf8().constData();
    int number = ui->number->value();
    Footballer footballer(fname,lname,posi,number);
    QString itemString = QString::fromStdString(footballer.text());
    ui->footballersList->addItem(itemString);
    team.addFootballer(footballer);

}


void MainWindow::on_st_clicked()
{
posi="Napastnik";
}


void MainWindow::on_mid_clicked()
{
posi="Pomocnik";
}


void MainWindow::on_def_clicked()
{
posi = "Obronca";
}


void MainWindow::on_gk_clicked()
{
posi = "Bramkarz";
}


void MainWindow::on_addTeams_clicked()
{
    string name = ui->teamName->text().toUtf8().constData();

    team.setName(name);
   ladder.addTeam(team);
   QString itemString = QString::fromStdString(team.text());
   ui->teams->addItem(QString::number(counts) +" " + itemString);

   ui->teamsCounter->setText(QString::number(counts));
   counts ++;

}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_pushButton_2_clicked()
{
    QList<QListWidgetItem*> items = ui->teams->selectedItems();
    foreach(QListWidgetItem* item, items){
        ui->teamsView->addItem(QString::fromStdString(team.text()));

    }
}

