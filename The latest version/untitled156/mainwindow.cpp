#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include <QtDebug>
#define pot "E:/Projektni teden/knjiznca.sqlite"
#include <QTextEdit>
QString mode="No";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->inEdit1->setVisible(0);
    ui->inEdit2->setVisible(0);
    ui->inEdit3->setVisible(0);
    ui->inEdit4->setVisible(0);
    ui->inEdit5->setVisible(0);
    ui->inEdit6->setVisible(0);
    ui->inCombo->setVisible(0);

    ui->inKnjiga->setPlaceholderText("ID Knjige");
    ui->inKnjiznicar->setPlaceholderText("ID Knjiznicar");
    ui->inClan->setPlaceholderText("ID Clan");

    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(pot);
    QFileInfo preveri(pot);
    if(preveri.isFile()){
        if(db.open()){
            poizvedba=new QSqlQuery;
            ui->status->setText("Povezava je uspela!");
        }
    }
    else
         ui->status->setText("Povezava ni uspela!");

}

MainWindow::~MainWindow()
{
    delete poizvedba;
    delete ui;
    db.close();
}

void MainWindow::on_pozeni_clicked()
{
    updateIzpis();
}

void MainWindow::vnosTab2(int n){
    ui->inCombo->setVisible(0);
    ui->inEdit1->setVisible(1);
    ui->inEdit2->setVisible(1);
    ui->inEdit3->setVisible(1);
    ui->inEdit4->setVisible(1);

    ui->inEdit1->setText("");
    ui->inEdit2->setText("");
    ui->inEdit3->setText("");
    ui->inEdit4->setText("");


    if(n>=5){
        ui->inEdit5->setVisible(1);
        ui->inEdit5->setText("");
    }
    else{
        ui->inEdit5->setVisible(0);
    }
    if(n==6){
        ui->inEdit6->setVisible(1);
        ui->inEdit6->setText("");
    }
    else{
        ui->inEdit6->setVisible(0);
    }
}

void MainWindow::on_radioKnjiga_clicked()
{
    vnosTab2(6);
    mode="Knjiga";
    ui->inEdit1->setPlaceholderText("ID Knjiga");
    ui->inEdit2->setPlaceholderText("Naslov");
    ui->inEdit3->setPlaceholderText("Leto izdaje");
    ui->inEdit4->setPlaceholderText("ID Zalozba");
    ui->inEdit5->setVisible(0);
    ui->inCombo->setVisible(1);
    ui->inEdit6->setPlaceholderText("ID Avtor");
}

void MainWindow::on_radioClan_clicked()
{
    vnosTab2(4);
    mode="Clan";
    ui->inEdit1->setPlaceholderText("ID Clan");
    ui->inEdit2->setPlaceholderText("Ime");
    ui->inEdit3->setPlaceholderText("Priimek");
    ui->inEdit4->setPlaceholderText("Datum rojstva");
}

void MainWindow::on_radioAvtor_clicked()
{
    vnosTab2(5);
    mode="Avtor";
    ui->inEdit1->setPlaceholderText("ID Avtor");
    ui->inEdit2->setPlaceholderText("Ime");
    ui->inEdit3->setPlaceholderText("Priimek");
    ui->inEdit4->setPlaceholderText("Drzava");
    ui->inEdit5->setPlaceholderText("Datum rojstva");
}

void MainWindow::on_radioZalozba_clicked()
{
    vnosTab2(5);
    mode="Zalozba";
    ui->inEdit1->setPlaceholderText("ID Zalozba");
    ui->inEdit2->setPlaceholderText("Naziv");
    ui->inEdit3->setPlaceholderText("Naslov");
    ui->inEdit4->setPlaceholderText("Posta");
    ui->inEdit5->setPlaceholderText("Kraj");
}

void MainWindow::on_inButton_clicked()
{
    ui->testlabel->setText("Izvajam.");
    bool izvrsi = false;
    if(mode!="No"){ //radio button je bil že kliknjen
        QString tmp="INSERT INTO ";
        tmp=tmp+mode+ " VALUES";
        tmp=tmp+ " (" + ui->inEdit1->text() + ", ";
        tmp=tmp+ "'" + ui->inEdit2->text() + "',";
        if(mode!="Knjiga")
            tmp=tmp + "'" + ui->inEdit3->text() + "', ";
        else
            tmp=tmp + ui->inEdit3->text() + ", ";
        if(mode=="Clan" || mode=="Avtor")
            tmp=tmp + "'" + ui->inEdit4->text() + "'";
        else
            tmp=tmp + ui->inEdit4->text();
        if (mode=="Clan"){
            tmp=tmp+");";
            izvrsi=poizvedba->exec(tmp);
        }
        if(mode!="Clan"){
            if(mode=="Knjiga"){
                QString temptemp=ui->inCombo->currentText();
                tmp=tmp+",'" + temptemp + "', "+ui->inEdit6->text()+ ");";}
            else
                tmp=tmp+",'" + ui->inEdit5->text() + "');";
            izvrsi=poizvedba->exec(tmp);
        }
    }
    if(izvrsi)
        ui->testlabel->setText("Uspesen vnos.");
    else
        ui->testlabel->setText("Neuspesen vnos.");
}

void MainWindow::updateIzpis(){
    QSqlQueryModel *model1=new QSqlQueryModel;
        QString tmp="SELECT * FROM ";
            if(ui->izbira->currentText()=="Knjige"){
                tmp=tmp+"Knjiga JOIN Avtor";
            }
            if(ui->izbira->currentText()=="Clani"){
                tmp=tmp+"Clan";
            }
            if(ui->izbira->currentText()=="Avtorji"){
                tmp=tmp+"Avtor";
            }
            if(ui->izbira->currentText()=="Zalozbe"){
                tmp=tmp+"Zalozba";
            }
            if(ui->izbira->currentText()=="Knjiznicarji"){
                tmp=tmp+"Knjiznicar";
            }
            if(ui->izbiraAtribut->currentText()!=""){
                QString atribut=ui->izbiraAtribut->currentText();
                if(atribut=="IDKnjiga"||atribut=="IDAvtor"||atribut=="IDZalozba"
                        ||atribut=="IDClan"||atribut=="Leto_izdaje")
                    tmp=tmp+" WHERE " + ui->izbiraAtribut->currentText() + "=" + ui->atributValue->text();
                else
                    tmp=tmp+" WHERE " + ui->izbiraAtribut->currentText() + "='" + ui->atributValue->text()+"'";
            }
            if(ui->izbiraSort->currentText()!=""){
                tmp=tmp+" ORDER BY "+ui->izbiraSort->currentText()+" ASC";
            }
            tmp=tmp+";";
            model1->setQuery(tmp);
            ui->izpis->setModel(model1);
            //if(ui->izbira->currentText()=="Knjiga");
}


void MainWindow::on_pushButton_clicked(){
    QSqlQueryModel *model1=new QSqlQueryModel;
    if(ui->izbira->currentText()=="Knjige")
        model1->setQuery("DELETE FROM Knjiga WHERE IDKnjiga="+ui->idIzbris->text()+";");

    if(ui->izbira->currentText()=="Avtorji")
        model1->setQuery("DELETE FROM Avtor WHERE IDAvtor="+ui->idIzbris->text()+";");

    if(ui->izbira->currentText()=="Clani")
        model1->setQuery("DELETE FROM Clan WHERE IDClan="+ui->idIzbris->text()+";");

    if(ui->izbira->currentText()=="Zalozbe")
        model1->setQuery("DELETE FROM Zalozba WHERE IDZalozba="+ui->idIzbris->text()+";");

    updateIzpis();
    delete model1;
}

void MainWindow::on_izbira_activated(const QString &arg1){
    QString tmp=ui->izbira->currentText();
    ui->izbiraSort->clear();
    ui->izbiraAtribut->clear();
    ui->izbiraAtribut->addItem("");
    ui->izbiraSort->addItem("");
    if(tmp=="Knjige"){
        ui->izbiraAtribut->addItem("IDKnjiga");
        ui->izbiraAtribut->addItem("Naslov_knjige");
        ui->izbiraAtribut->addItem("Leto_izdaje");
        ui->izbiraAtribut->addItem("IDZalozba");
        ui->izbiraAtribut->addItem("Status");
        ui->izbiraAtribut->addItem("IDAvtor");
        ui->izbiraSort->addItem("IDKnjiga");
        ui->izbiraSort->addItem("Naslov_knjige");
        ui->izbiraSort->addItem("Leto_izdaje");
        ui->izbiraSort->addItem("IDZalozba");
        ui->izbiraSort->addItem("Status");
        ui->izbiraSort->addItem("IDAvtor");
    }
    else if(tmp=="Avtorji"){
        ui->izbiraAtribut->addItem("IDAvtor");
        ui->izbiraAtribut->addItem("Ime");
        ui->izbiraAtribut->addItem("Priimek");
        ui->izbiraAtribut->addItem("Drzava");
        ui->izbiraSort->addItem("IDAvtor");
        ui->izbiraSort->addItem("Ime");
        ui->izbiraSort->addItem("Priimek");
        ui->izbiraSort->addItem("Drzava");
    }
    else if(tmp=="Zalozbe"){
        ui->izbiraAtribut->addItem("IDZalozba");
        ui->izbiraAtribut->addItem("Naziv");
        ui->izbiraSort->addItem("IDZalozba");
        ui->izbiraSort->addItem("Naziv");
    }
    else if(tmp=="Clani"){
        ui->izbiraAtribut->addItem("IDClan");
        ui->izbiraAtribut->addItem("Ime");
        ui->izbiraAtribut->addItem("Priimek");
        ui->izbiraSort->addItem("IDClan");
        ui->izbiraSort->addItem("Ime");
        ui->izbiraSort->addItem("Priimek");
    }
    else if(tmp=="Knjiznicarji"){
        ui->izbiraAtribut->addItem("IDKnjiznicar");
        ui->izbiraAtribut->addItem("Ime");
        ui->izbiraAtribut->addItem("Priimek");
        ui->izbiraSort->addItem("ID");
        ui->izbiraSort->addItem("Ime");
        ui->izbiraSort->addItem("Priimek");
    }

}
