#include "form2.h"
#include "ui_form2.h"

Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
    ui->comboBox_6->addItem("20年3月20日贷款市场报利率(LPR)");
    ui->comboBox_6->addItem("19年9月20日贷款市场报利率(LPR)");
    ui->comboBox_6->addItem("15年10月24日利率上限(1.1倍)");
    ui->comboBox_6->addItem("15年10月24日利率上限(1.05倍)");
    ui->comboBox_6->addItem("15年10月24日利率下限(85折)");
    ui->comboBox_6->addItem("15年10月24日利率下限(7折)");
    ui->comboBox_6->addItem("15年10月24日基准利率");
    ui->comboBox_6->addItem("15年8月26日利率上限(1.1倍)");
    ui->comboBox_6->addItem("15年8月26日利率下限(85折)");
    ui->comboBox_6->addItem("15年8月26日利率下限(7折)");
    ui->comboBox_6->addItem("15年8月26日基准利率");
    ui->comboBox_6->addItem("15年6月28日利率上限(1.1倍)");
    ui->comboBox_6->addItem("15年6月28日利率下限(85折)");
    ui->comboBox_6->addItem("15年6月28日利率下限(7折)");
    ui->comboBox_6->addItem("15年6月28日基准利率");
    ui->comboBox_6->addItem("15年5月11日利率上限(1.1倍)");
    ui->comboBox_6->addItem("15年5月11日利率下限(85折)");
    ui->comboBox_6->addItem("15年5月11日利率下限(7折)");
    ui->comboBox_6->addItem("15年5月11日基准利率");
    ui->comboBox_6->addItem("15年3月1日利率上限(1.1倍)");
    ui->comboBox_6->addItem("15年3月1日利率下限(85折)");
    ui->comboBox_6->addItem("15年3月1日利率下限(7折)");
    ui->comboBox_6->addItem("15年3月1日基准利率");
    ui->comboBox_6->addItem("14年11月22日利率上限(1.1倍)");
    ui->comboBox_6->addItem("14年11月22日利率下限(85折)");
    ui->comboBox_6->addItem("14年11月22日利率下限(7折)");
    ui->comboBox_6->addItem("14年11月22日基准利率");
    ui->comboBox_6->addItem("12年7月6日利率上限(1.1倍)");
    ui->comboBox_6->addItem("12年7月6日利率下限(85折)");
    ui->comboBox_6->addItem("12年7月6日利率下限(7折)");
    ui->comboBox_6->addItem("12年7月6日基准利率");
    ui->comboBox_6->addItem("12年6月8日利率上限(1.1倍)");
    ui->comboBox_6->addItem("12年6月8日利率下限(85折)");
    ui->comboBox_6->addItem("12年6月8日利率下限(7折)");
    ui->comboBox_6->addItem("12年6月8日基准利率");
    ui->lineEdit_4->setPlaceholderText("         %");
    ui->lineEdit_4->setText("3.25");
    void(QComboBox::*p)(int index)=&QComboBox::currentIndexChanged;
    connect(ui->comboBox_6, p,ui->lineEdit_4,[=](){ int i=ui->comboBox_6->currentIndex();
        switch(i)
        {
        case 0:ui->lineEdit_4->setText("3.25");break;
        case 1:ui->lineEdit_4->setText("3.25");break;
        case 2:ui->lineEdit_4->setText("3.57");break;
        case 3:ui->lineEdit_4->setText("3.41");break;
        case 4:ui->lineEdit_4->setText("2.76");break;
        case 5:ui->lineEdit_4->setText("2.28");break;
        case 6:ui->lineEdit_4->setText("3.25"); break;
        case 7:ui->lineEdit_4->setText("3.57"); break;
        case 8:ui->lineEdit_4->setText("2.76"); break;
        case 9:ui->lineEdit_4->setText("2.28"); break;
        case 10:ui->lineEdit_4->setText("3.25"); break;
        case 11:ui->lineEdit_4->setText("3.85");break;
        case 12:ui->lineEdit_4->setText("2.98");break;
        case 13:ui->lineEdit_4->setText("2.45");break;
        case 14:ui->lineEdit_4->setText("3.5");break;
        case 15:ui->lineEdit_4->setText("4.13");break;
        case 16:ui->lineEdit_4->setText("3.19"); break;
        case 17:ui->lineEdit_4->setText("2.63"); break;
        case 18:ui->lineEdit_4->setText("3.75"); break;
        case 19:ui->lineEdit_4->setText("4.4"); break;
        case 20:ui->lineEdit_4->setText("3.4"); break;
        case 21:ui->lineEdit_4->setText("2.8");break;
        case 22:ui->lineEdit_4->setText("4");break;
        case 23:ui->lineEdit_4->setText("4.25");break;
        case 24:ui->lineEdit_4->setText("4.25");break;
        case 25:ui->lineEdit_4->setText("4.25");break;
        case 26:ui->lineEdit_4->setText("4.25"); break;
        case 27:ui->lineEdit_4->setText("4.5"); break;
        case 28:ui->lineEdit_4->setText("4.5"); break;
        case 29:ui->lineEdit_4->setText("4.5"); break;
        case 30:ui->lineEdit_4->setText("4.5"); break;
        case 31:ui->lineEdit_4->setText("4.7");break;
        case 32:ui->lineEdit_4->setText("4.7");break;
        case 33:ui->lineEdit_4->setText("4.7");break;
        case 34:ui->lineEdit_4->setText("4.7");break;
        default: break;
        }
    });

}
QString Form2::gettext()
{
    return ui->lineEdit_4->text();
}
void Form2::setclear()
{
    ui->comboBox_6->setCurrentIndex(0);
}

Form2::~Form2()
{
    delete ui;
}
