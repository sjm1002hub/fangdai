#include "form.h"
#include "ui_form.h"
#include"QComboBox"
#include<QStringList>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    ui->comboBox_1->addItem("20年3月20日贷款市场报利率(LPR)");
        ui->comboBox_1->addItem("19年9月20日贷款市场报利率(LPR)");
        ui->comboBox_1->addItem("15年10月24日利率上限(1.1倍)");
        ui->comboBox_1->addItem("15年10月24日利率上限(1.05倍)");
        ui->comboBox_1->addItem("15年10月24日利率下限(85折)");
        ui->comboBox_1->addItem("15年10月24日利率下限(7折)");
        ui->comboBox_1->addItem("15年10月24日基准利率");
        ui->comboBox_1->addItem("15年8月26日利率上限(1.1倍)");
        ui->comboBox_1->addItem("15年8月26日利率下限(85折)");
        ui->comboBox_1->addItem("15年8月26日利率下限(7折)");
        ui->comboBox_1->addItem("15年8月26日基准利率");
        ui->comboBox_1->addItem("15年6月28日利率上限(1.1倍)");
        ui->comboBox_1->addItem("15年6月28日利率下限(85折)");
        ui->comboBox_1->addItem("15年6月28日利率下限(7折)");
        ui->comboBox_1->addItem("15年6月28日基准利率");
        ui->comboBox_1->addItem("15年5月11日利率上限(1.1倍)");
        ui->comboBox_1->addItem("15年5月11日利率下限(85折)");
        ui->comboBox_1->addItem("15年5月11日利率下限(7折)");
        ui->comboBox_1->addItem("15年5月11日基准利率");
        ui->comboBox_1->addItem("15年3月1日利率上限(1.1倍)");
        ui->comboBox_1->addItem("15年3月1日利率下限(85折)");
        ui->comboBox_1->addItem("15年3月1日利率下限(7折)");
        ui->comboBox_1->addItem("15年3月1日基准利率");
        ui->comboBox_1->addItem("14年11月22日利率上限(1.1倍)");
        ui->comboBox_1->addItem("14年11月22日利率下限(85折)");
        ui->comboBox_1->addItem("14年11月22日利率下限(7折)");
        ui->comboBox_1->addItem("14年11月22日基准利率");
        ui->comboBox_1->addItem("12年7月6日利率上限(1.1倍)");
        ui->comboBox_1->addItem("12年7月6日利率下限(85折)");
        ui->comboBox_1->addItem("12年7月6日利率下限(7折)");
        ui->comboBox_1->addItem("12年7月6日基准利率");
        ui->comboBox_1->addItem("12年6月8日利率上限(1.1倍)");
        ui->comboBox_1->addItem("12年6月8日利率下限(85折)");
        ui->comboBox_1->addItem("12年6月8日利率下限(7折)");
        ui->comboBox_1->addItem("12年6月8日基准利率");
        ui->lineEdit->setPlaceholderText("         %");
        ui->lineEdit->setText("4.75");
        void(QComboBox::*p)(int index)=&QComboBox::currentIndexChanged;
        connect(ui->comboBox_1, p,ui->lineEdit,[=](){ int i=ui->comboBox_1->currentIndex();
            switch(i)
            {
            case 0:ui->lineEdit->setText("4.75");break;
            case 1:ui->lineEdit->setText("4.85");break;
            case 2:ui->lineEdit->setText("5.39");break;
            case 3:ui->lineEdit->setText("5.15");break;
            case 4:ui->lineEdit->setText("4.17");break;
            case 5:ui->lineEdit->setText("3.43");break;
            case 6:ui->lineEdit->setText("4.9"); break;
            case 7:ui->lineEdit->setText("5.67"); break;
            case 8:ui->lineEdit->setText("4.38"); break;
            case 9:ui->lineEdit->setText("3.61"); break;
            case 10:ui->lineEdit->setText("5.15"); break;
            case 11:ui->lineEdit->setText("5.94");break;
            case 12:ui->lineEdit->setText("4.59");break;
            case 13:ui->lineEdit->setText("3.78");break;
            case 14:ui->lineEdit->setText("5.4");break;
            case 15:ui->lineEdit->setText("6.22");break;
            case 16:ui->lineEdit->setText("4.8"); break;
            case 17:ui->lineEdit->setText("3.96"); break;
            case 18:ui->lineEdit->setText("5.65"); break;
            case 19:ui->lineEdit->setText("6.49"); break;
            case 20:ui->lineEdit->setText("5.01"); break;
            case 21:ui->lineEdit->setText("4.13");break;
            case 22:ui->lineEdit->setText("5.9");break;
            case 23:ui->lineEdit->setText("6.7");break;
            case 24:ui->lineEdit->setText("5.2");break;
            case 25:ui->lineEdit->setText("4.3");break;
            case 26:ui->lineEdit->setText("6.15"); break;
            case 27:ui->lineEdit->setText("7.12"); break;
            case 28:ui->lineEdit->setText("5.57"); break;
            case 29:ui->lineEdit->setText("4.59"); break;
            case 30:ui->lineEdit->setText("6.55"); break;
            case 31:ui->lineEdit->setText("7.48");break;
            case 32:ui->lineEdit->setText("5.78");break;
            case 33:ui->lineEdit->setText("4.76");break;
            case 34:ui->lineEdit->setText("6.8");break;
            default: break;
            }
        });
}
 QString Form::gettext()
 {
     return ui->lineEdit->text();
 }
 void Form::setclear()
 {
     ui->comboBox_1->setCurrentIndex(0);
 }

Form::~Form()
{

    delete ui;
}




