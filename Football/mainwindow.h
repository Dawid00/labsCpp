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
    void on_actionOpcje_triggered();

    void on_actionStop_triggered();

    void on_actionChange_BackgroundColor_triggered();

    void on_clearList_clicked();

    void on_deleteLast_clicked();

    void on_addFootballer_clicked();

    void on_st_clicked();

    void on_mid_clicked();

    void on_def_clicked();

    void on_gk_clicked();

    void on_addTeams_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
