#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <vector>
#include <string>
#include <QString>
#include <fstream>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
struct itemPrice
{
    std::string itemName;
    int itemPrice;
};
std::vector<itemPrice>v;
int total  = 0;

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Cart_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    std::string str;
    for(int i = 0;i<v.size();i++)
    {
        str = v[i].itemName+"\t\t\t\t"+std::to_string(v[i].itemPrice);
        ui->cartitems->addItem(str.c_str());
        total += v[i].itemPrice;
    }
    str = std::to_string(total);
    ui->price->setText(str.c_str());

}


void MainWindow::on_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pay_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    std::string str = std::to_string(total);
    ui->pricepay->setText(str.c_str());
}

struct receiptInfo
{
    int receiptNum;
    QString custName,cardNum;
};

void MainWindow::on_confirm_clicked()
{
    std::ofstream outputFile;
    receiptInfo ri;
    ri.receiptNum = rand()%(1000000000-1000000+1)+1000000;
    ri.custName = ui->namet->toPlainText();
    ri.cardNum = ui->cardt->toPlainText();
    outputFile.open("salesData.txt",std::ios::app);
    if(outputFile)
    {
        outputFile<<"Receipt Number :"<<ri.receiptNum<<"\n";
        outputFile<<"Customer Name :"<<ri.custName.toStdString()<<"\n";
        outputFile<<"Card Information :"<<ri.cardNum.toStdString()<<"\n";
        outputFile<<"__________________________________________________\n";
        outputFile<<"Items\t\tPrice\n";
        for(int i = 0;i<v.size();i++)
        {
            outputFile<<v[i].itemName<<"\t\t"<<v[i].itemPrice<<"\n";
        }
        outputFile<<"Total :\t\t"<<total<<"\n";
    }
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_new_2_clicked()
{
    ui->cartitems->clear();
    ui->cardt->clear();
    ui->namet->clear();
    v.clear();
    total = 0;
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_appleadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Apple";
    ip.itemPrice = 20;
    v.push_back(ip);
}



void MainWindow::on_bananaadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Banana";
    ip.itemPrice = 10;
    v.push_back(ip);
}


void MainWindow::on_mangoadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Mango";
    ip.itemPrice = 30;
    v.push_back(ip);
}


void MainWindow::on_orangeadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Orange";
    ip.itemPrice = 15;
    v.push_back(ip);
}


void MainWindow::on_fruits_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_vegetables_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_chocolates_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_softdrinks_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_potatoadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Potato";
    ip.itemPrice = 20;
    v.push_back(ip);
}


void MainWindow::on_tomatoadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Tomato";
    ip.itemPrice = 10;
    v.push_back(ip);
}


void MainWindow::on_cabbageadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Bringal";
    ip.itemPrice = 30;
    v.push_back(ip);
}


void MainWindow::on_drumstickadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Onion";
    ip.itemPrice = 15;
    v.push_back(ip);
}


void MainWindow::on_milkybaradd_clicked()
{
    itemPrice ip;
    ip.itemName = "Fivestar";
    ip.itemPrice = 20;
    v.push_back(ip);
}


void MainWindow::on_dairymilkadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Fuse";
    ip.itemPrice = 10;
    v.push_back(ip);
}


void MainWindow::on_kitkatadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Kit Kat";
    ip.itemPrice = 30;
    v.push_back(ip);
}


void MainWindow::on_munchadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Munch";
    ip.itemPrice = 15;
    v.push_back(ip);
}


void MainWindow::on_spriteadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Sprite";
    ip.itemPrice = 20;
    v.push_back(ip);
}


void MainWindow::on_thumsupadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Limca";
    ip.itemPrice = 10;
    v.push_back(ip);
}


void MainWindow::on_cococolaadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Fanta";
    ip.itemPrice = 30;
    v.push_back(ip);
}


void MainWindow::on_maazaadd_clicked()
{
    itemPrice ip;
    ip.itemName = "Maaza";
    ip.itemPrice = 15;
    v.push_back(ip);
}


void MainWindow::on_Cart_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    std::string str;
    for(int i = 0;i<v.size();i++)
    {
        str = v[i].itemName+"\t\t\t\t"+std::to_string(v[i].itemPrice);
        ui->cartitems->addItem(str.c_str());
        total += v[i].itemPrice;
    }
    str = std::to_string(total);
    ui->price->setText(str.c_str());
}


void MainWindow::on_Cart_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    std::string str;
    for(int i = 0;i<v.size();i++)
    {
        str = v[i].itemName+"\t\t\t\t"+std::to_string(v[i].itemPrice);
        ui->cartitems->addItem(str.c_str());
        total += v[i].itemPrice;
    }
    str = std::to_string(total);
    ui->price->setText(str.c_str());
}


void MainWindow::on_Cart_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    std::string str;
    for(int i = 0;i<v.size();i++)
    {
        str = v[i].itemName+"\t\t\t\t"+std::to_string(v[i].itemPrice);
        ui->cartitems->addItem(str.c_str());
        total += v[i].itemPrice;
    }
    str = std::to_string(total);
    ui->price->setText(str.c_str());
}

void MainWindow::on_login_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_clear_clicked()
{
    ui->cartitems->clear();
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

