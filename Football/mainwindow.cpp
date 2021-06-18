#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QFile>
#include <QApplication>
#include <QProcess>
#include <QMessageBox>
int counts = 0;
QString position;
bool dark = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    teamCounter();
    QMessageBox::information(this,"Start","Program ten może Ci pomóc zorganizować turniej piłki nożnej dla maksymalnie 6 drużyn!");
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
close();
}
void MainWindow::on_actionChange_BackgroundColor_triggered()
{
    if(dark)
 {       setStyleSheet("background-color:white");
    dark=false;
}    else{
        setStyleSheet("background-color:#D4D9DB");
        dark =true;
    }
}
void MainWindow::on_clearList_clicked()
{
clearFootballers();
}

void MainWindow::clearFootballers()
{
    ui->footballersList->clear();
}
void MainWindow::on_deleteLast_clicked()
{
    QList<QListWidgetItem*> items = ui->footballersList->selectedItems();
    foreach(QListWidgetItem* item, items){
        ui->footballersList->removeItemWidget(item);
        delete item;

    }

}
void MainWindow::on_deleteTeam_clicked()
{
    QList<QListWidgetItem*> items = ui->teams->selectedItems();
    foreach(QListWidgetItem* item, items){
        ui->teams->removeItemWidget(item);
        delete item;

    }
    counts--;
    teamCounter();
}
void MainWindow::on_clearList_2_clicked()
{
    ui->teams->clear();
    counts = 0;
    teamCounter();
}
void MainWindow::on_addFootballer_clicked()
{

    QString number = QString::number(ui->number->value());
    QString itemString = ui->typefirstname->text() + " " + ui->typelastname->text()  + "    " + number + "     " +position;
    ui->footballersList->addItem(itemString);
    ui->typefirstname->clear();
    ui->typelastname->clear();
}
void MainWindow::saveCompetition()
{
    QFile file("competiotion.txt");
    if(!file.open(QFile::WriteOnly |
    QFile::Text))
    {
    qDebug() << " Could not open file for writing";
    return;
    }

    QTextStream out(&file);
    QListWidgetItem* item;
    for (int i = 0 ; i < ui->teams->count(); i ++)
    {

         item= ui->teams->item(i);
             out<<item->text()<<" - " << i+1<<"\n";

    }
    file.flush();
    file.close();
}
void MainWindow::readCompetition()
{

QFile file("competiotion.txt");
    if(!file.open(QFile::ReadOnly |
    QFile::Text))
    {
    qDebug() << " Could not open the file for reading";
    return;
    }
    QTextStream in(&file);
    QString myText = in.readAll();
    ui->endviewteams->setPlainText(myText);
    file.close();
}
void MainWindow::readTeam(QString teamName)
{

    QFile file(teamName+".txt");
    if(!file.open(QFile::ReadOnly |
    QFile::Text))
    {
    qDebug() << " Could not open the file for reading";
    return;
    }
    QTextStream in(&file);
    QString myText = in.readAll();
    ui->squad->setPlainText(myText);
    file.close();
}
void MainWindow::saveTeam(QString teamName)
{

    QFile file(teamName+".txt");
    if(!file.open(QFile::WriteOnly |
    QFile::Text))
    {
    qDebug() << " Could not open file for writing";
    return;
    }

    QTextStream out(&file);
    QListWidgetItem* item;
    for (int i = 0 ; i < ui->footballersList->count(); i ++)
    {

         item= ui->footballersList->item(i);
             out<<item->text();
             out<<"\n";
    }
    file.flush();
    file.close();

}
void MainWindow::teamCounter()
{
    ui->teamsCounter->setText(QString::number(counts));

}
void MainWindow::on_addTeams_clicked()
{
    ui->teams->addItem(ui->teamName->text());
    counts ++;
    saveTeam(ui->teamName->text());
    ui->teamName->clear();
    teamCounter();
    clearFootballers();
}
void MainWindow::on_showFootballers_clicked()
{
    QList<QListWidgetItem*> items = ui->teams->selectedItems();
    foreach(QListWidgetItem* item, items){
    QString str = item->text();
    readTeam(str);
    }
}
void MainWindow::on_submit_clicked()
{
    QMessageBox::information(this,"Zatwierdzenie turnieju!","Po zatwierdzeniu drużyn nie będzie można ich modyfikować!");
    if(QMessageBox::question(this,"Zatwierdzenie turnieju!","Czy na pewno chcesz zatwierdzić drużyny?",
    QMessageBox::Yes | QMessageBox::No ) != QMessageBox::No)
{
     QMessageBox::information(this,"Zatwierdzenie turnieju!","Zwyciezca turnieju zgarnia cala pule! Powodzenia");
   saveCompetition();
   readCompetition();
    switch(counts)
    {
    case 0:
        ui->endview->setText("Turniej bez żadnej drużyny nie może się odbyć!  Musisz wprowadzić conajmniej dwie drużyny");
        break;
    case 1:
           ui->endview->setText("Musisz wprowadzić conajmniej dwie drużyny");
        break;
    case 2:
         ui->endview->setText("Mecz nr 1: 1 - 2");
        break;
    case 3:
    {
        QString tekst = "Mecz nr 1: 1 - 2\nMecz nr 2: 1 - 3\nMecz nr 3: 2 - 3";
        ui->endview->setText(tekst);
        break;
    }
    case 4:
    {
      QString  tekst = "Mecz nr 1: 1 - 4\nMecz nr 2: 2 - 3\nMecz nr 3: 4 - 2\nMecz nr 4: 1 - 3\nMecz nr 5: 2 - 1\nMecz nr 6: 3 - 4";
        ui->endview->setText(tekst);
       break;
    }
    case 5:
    {
        QString  tekst = "Mecz nr 1: 2 - 5\nMecz nr 2: 3 - 4\nMecz nr 3: 1 - 5\nMecz nr 4: 2 - 3\nMecz nr 5: 4 - 1\nMecz nr 6: 5 - 3\nMecz nr 7: 4 - 2\nMecz nr 8: 1 - 3\nMecz nr 9: 5 - 3\nMecz nr 10: 5 - 4";
          ui->endview->setText(tekst);
       break;
    }
    case 6:
    {
       QString  tekst = "Mecz nr 1: 1 - 6\nMecz nr 2: 2 - 5\nMecz nr 3: 3 - 4\nMecz nr 4: 1 - 5\nMecz nr 5: 6 - 4\nMecz nr 6: 2 - 3\nMecz nr 7: 4 - 1\nMecz nr 8: 5 - 3\nMecz nr 9: 6 - 2\nMecz nr 10: 1 - 3\nMecz nr 11: 4 - 2\nMecz nr 12: 5 - 6\nMecz nr 13: 1 - 2\nMecz nr 14: 3 - 6\nMecz nr 15: 4 - 5";
       ui->endview->setText(tekst);
       break;
    }
    case 7:
     {
        ui->endview->setText("Mecz nr 1: 1 - 2");
       break;

      }
    case 8:
       {
        ui->endview->setText("Mecz nr 1: 1 - 2");
       break;
        }
    }
    ui->torunament->setText(ui->tournamentName->text());

    int stawka = ui->typewpisowe->value();
    int winnerPrize = counts * stawka;

    ui->prize->setText(QString::number(winnerPrize)+" zl");

    }

}


void MainWindow::on_restart_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void MainWindow::on_st_clicked()
{
position="Napastnik";
}
void MainWindow::on_mid_clicked()
{
position="Pomocnik";
}
void MainWindow::on_def_clicked()
{
position = "Obronca";
}
void MainWindow::on_gk_clicked()
{
position = "Bramkarz";
}

void MainWindow::on_typewpisowe_actionTriggered(int action)
{
ui->wpisowe->setText(QString::number(ui->typewpisowe->value() + 1)+" zl");
}

