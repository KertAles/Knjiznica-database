#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pozeni_clicked();

    void on_radioKnjiga_clicked();

    void on_radioClan_clicked();

    void on_radioAvtor_clicked();

    void on_radioZalozba_clicked();

    void vnosTab2(int);

    void on_inButton_clicked();

    void on_pushButton_clicked();

    void updateIzpis();

    void on_izbira_activated(const QString &arg1);

private:
    QSqlDatabase db;
    Ui::MainWindow *ui;
    QSqlQuery *poizvedba;

};

#endif // MAINWINDOW_H
