#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButtonAsalSayiBul_clicked()
{
    ui->textBrowserAsalSayiGoster->clear();
    int sayi = ui->lineEditSayi->text().toInt();
    int kontrol=0;

    for(int i=2; i<sayi; i++){
        kontrol = 0;
        for(int k=2; k<i; k++){
            if(i%k==0){
                kontrol = 1;
            }
        }
        if(kontrol == 0){
            ui->textBrowserAsalSayiGoster->setText(ui->textBrowserAsalSayiGoster->toPlainText()+ "\n" + QString::number(i));
        }
    }
}

