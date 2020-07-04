/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 30. Mar 09:02:45 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *status;
    QComboBox *izbira;
    QPushButton *pozeni;
    QLabel *label;
    QTableView *izpis;
    QPushButton *pushButton;
    QLineEdit *idIzbris;
    QLabel *label_2;
    QComboBox *izbiraAtribut;
    QLabel *label_3;
    QLineEdit *atributValue;
    QLabel *label_4;
    QComboBox *izbiraSort;
    QWidget *tab_2;
    QRadioButton *radioKnjiga;
    QRadioButton *radioClan;
    QRadioButton *radioAvtor;
    QRadioButton *radioZalozba;
    QLineEdit *inEdit1;
    QLineEdit *inEdit2;
    QLineEdit *inEdit3;
    QLineEdit *inEdit4;
    QLineEdit *inEdit5;
    QLineEdit *inEdit6;
    QPushButton *inButton;
    QComboBox *comboBox;
    QComboBox *inCombo;
    QLabel *testlabel;
    QWidget *tab_3;
    QLineEdit *inKnjiga;
    QLineEdit *inKnjiznicar;
    QLineEdit *inClan;
    QPushButton *izposoja;
    QPushButton *vrnitev;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1051, 574);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1051, 511));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        status = new QLabel(tab);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(10, 470, 331, 16));
        izbira = new QComboBox(tab);
        izbira->setObjectName(QString::fromUtf8("izbira"));
        izbira->setGeometry(QRect(10, 20, 121, 22));
        pozeni = new QPushButton(tab);
        pozeni->setObjectName(QString::fromUtf8("pozeni"));
        pozeni->setGeometry(QRect(380, 20, 75, 23));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 91, 16));
        izpis = new QTableView(tab);
        izpis->setObjectName(QString::fromUtf8("izpis"));
        izpis->setGeometry(QRect(10, 50, 1001, 411));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(810, 20, 75, 23));
        idIzbris = new QLineEdit(tab);
        idIzbris->setObjectName(QString::fromUtf8("idIzbris"));
        idIzbris->setGeometry(QRect(900, 20, 113, 20));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(900, 0, 121, 16));
        izbiraAtribut = new QComboBox(tab);
        izbiraAtribut->setObjectName(QString::fromUtf8("izbiraAtribut"));
        izbiraAtribut->setGeometry(QRect(140, 20, 121, 22));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 0, 171, 16));
        atributValue = new QLineEdit(tab);
        atributValue->setObjectName(QString::fromUtf8("atributValue"));
        atributValue->setGeometry(QRect(272, 20, 101, 20));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(530, 0, 71, 16));
        izbiraSort = new QComboBox(tab);
        izbiraSort->setObjectName(QString::fromUtf8("izbiraSort"));
        izbiraSort->setGeometry(QRect(520, 20, 121, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        radioKnjiga = new QRadioButton(tab_2);
        radioKnjiga->setObjectName(QString::fromUtf8("radioKnjiga"));
        radioKnjiga->setGeometry(QRect(10, 10, 51, 16));
        radioClan = new QRadioButton(tab_2);
        radioClan->setObjectName(QString::fromUtf8("radioClan"));
        radioClan->setGeometry(QRect(70, 10, 41, 17));
        radioAvtor = new QRadioButton(tab_2);
        radioAvtor->setObjectName(QString::fromUtf8("radioAvtor"));
        radioAvtor->setGeometry(QRect(120, 10, 51, 17));
        radioZalozba = new QRadioButton(tab_2);
        radioZalozba->setObjectName(QString::fromUtf8("radioZalozba"));
        radioZalozba->setGeometry(QRect(180, 10, 61, 17));
        inEdit1 = new QLineEdit(tab_2);
        inEdit1->setObjectName(QString::fromUtf8("inEdit1"));
        inEdit1->setGeometry(QRect(10, 40, 113, 20));
        inEdit2 = new QLineEdit(tab_2);
        inEdit2->setObjectName(QString::fromUtf8("inEdit2"));
        inEdit2->setGeometry(QRect(140, 40, 113, 20));
        inEdit3 = new QLineEdit(tab_2);
        inEdit3->setObjectName(QString::fromUtf8("inEdit3"));
        inEdit3->setGeometry(QRect(270, 40, 113, 20));
        inEdit4 = new QLineEdit(tab_2);
        inEdit4->setObjectName(QString::fromUtf8("inEdit4"));
        inEdit4->setGeometry(QRect(400, 40, 113, 20));
        inEdit5 = new QLineEdit(tab_2);
        inEdit5->setObjectName(QString::fromUtf8("inEdit5"));
        inEdit5->setGeometry(QRect(530, 40, 113, 20));
        inEdit6 = new QLineEdit(tab_2);
        inEdit6->setObjectName(QString::fromUtf8("inEdit6"));
        inEdit6->setGeometry(QRect(660, 40, 113, 20));
        inButton = new QPushButton(tab_2);
        inButton->setObjectName(QString::fromUtf8("inButton"));
        inButton->setGeometry(QRect(10, 80, 61, 31));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(2070, 260, 69, 22));
        inCombo = new QComboBox(tab_2);
        inCombo->setObjectName(QString::fromUtf8("inCombo"));
        inCombo->setGeometry(QRect(530, 40, 111, 22));
        testlabel = new QLabel(tab_2);
        testlabel->setObjectName(QString::fromUtf8("testlabel"));
        testlabel->setGeometry(QRect(80, 90, 171, 16));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        inKnjiga = new QLineEdit(tab_3);
        inKnjiga->setObjectName(QString::fromUtf8("inKnjiga"));
        inKnjiga->setGeometry(QRect(20, 50, 113, 20));
        inKnjiznicar = new QLineEdit(tab_3);
        inKnjiznicar->setObjectName(QString::fromUtf8("inKnjiznicar"));
        inKnjiznicar->setGeometry(QRect(20, 100, 113, 20));
        inClan = new QLineEdit(tab_3);
        inClan->setObjectName(QString::fromUtf8("inClan"));
        inClan->setGeometry(QRect(20, 150, 113, 20));
        izposoja = new QPushButton(tab_3);
        izposoja->setObjectName(QString::fromUtf8("izposoja"));
        izposoja->setGeometry(QRect(180, 50, 101, 51));
        vrnitev = new QPushButton(tab_3);
        vrnitev->setObjectName(QString::fromUtf8("vrnitev"));
        vrnitev->setGeometry(QRect(180, 120, 101, 51));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1051, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        status->setText(QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));
        izbira->clear();
        izbira->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "Knjige", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Avtorji", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Clani", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Zalozbe", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Knjiznicarji", 0, QApplication::UnicodeUTF8)
        );
        pozeni->setText(QApplication::translate("MainWindow", "Pozeni", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Kaj isces", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Izbrisi", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Izbris po ID", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Po cem isces(prazno-za vse zapise)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Razvrsti po", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Poizvedbe", 0, QApplication::UnicodeUTF8));
        radioKnjiga->setText(QApplication::translate("MainWindow", "Knjiga", 0, QApplication::UnicodeUTF8));
        radioClan->setText(QApplication::translate("MainWindow", "Clan", 0, QApplication::UnicodeUTF8));
        radioAvtor->setText(QApplication::translate("MainWindow", "Avtor", 0, QApplication::UnicodeUTF8));
        radioZalozba->setText(QApplication::translate("MainWindow", "Zalozba", 0, QApplication::UnicodeUTF8));
        inButton->setText(QApplication::translate("MainWindow", "Vnos", 0, QApplication::UnicodeUTF8));
        inCombo->clear();
        inCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Prosta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "V citalnici", 0, QApplication::UnicodeUTF8)
        );
        testlabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Dodajanje", 0, QApplication::UnicodeUTF8));
        izposoja->setText(QApplication::translate("MainWindow", "Izposoja", 0, QApplication::UnicodeUTF8));
        vrnitev->setText(QApplication::translate("MainWindow", "Vrnitev", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Izposoja", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
