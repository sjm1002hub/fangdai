#include "widget.h"
#include "ui_widget.h"
#include<QComboBox>
#include<QDoubleValidator>
#include<QPushButton>
#include<QString>
#include<QDebug>
#include<qmath.h>
#include<QVariant>
#include<QListWidget>
#include<QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
     ui->setupUi(this);

       ui->comboBox->addItem("商业贷款");
       ui->comboBox->addItem("公积金贷款");
       ui->comboBox->addItem("组合贷款");
       ui->comboBox_2->addItem("根据面积，单位计算");
       ui->comboBox_2->addItem("根据贷款总额");
       ui->comboBox_3->addItem("8成",QVariant(0.8) );
       ui->comboBox_3->addItem("7.5成",QVariant(0.75) );
       ui->comboBox_3->addItem("7成",QVariant(0.7) );
       ui->comboBox_3->addItem("6.5成",QVariant(0.65) );
       ui->comboBox_3->addItem("6成",QVariant(0.6) );
       ui->comboBox_3->addItem("5.5成",QVariant(0.5) );
       ui->comboBox_3->addItem("5成",QVariant(0.5) );
       ui->comboBox_3->addItem("4.5成",QVariant(0.45) );
       ui->comboBox_3->addItem("4成",QVariant(0.4) );
       ui->comboBox_3->addItem("3.5成",QVariant(0.35) );
       ui->comboBox_3->addItem("3成",QVariant(0.3) );
       ui->comboBox_3->addItem("2.5成",QVariant(0.25) );
       ui->comboBox_3->addItem("2成",QVariant(0.2) );
       ui->comboBox_4->addItem("25年(300期)",QVariant(300) );
       ui->comboBox_4->addItem("24年(288期)",QVariant(288) );
       ui->comboBox_4->addItem("23年(276期)",QVariant(276));
       ui->comboBox_4->addItem("22年(264期)",QVariant(264));
       ui->comboBox_4->addItem("21年(252期)",QVariant(252));
       ui->comboBox_4->addItem("20年(240期)",QVariant(240));
       ui->comboBox_4->addItem("19年(228期)",QVariant(228));
       ui->comboBox_4->addItem("18年(216期)",QVariant(216));
       ui->comboBox_4->addItem("17年(204期)",QVariant(204));
       ui->comboBox_4->addItem("16年(192期)",QVariant(192));
       ui->comboBox_4->addItem("15年(180期)",QVariant(180));
       ui->comboBox_4->addItem("14年(168期)",QVariant(168));
       ui->comboBox_4->addItem("13年(156期)",QVariant(156));
       ui->comboBox_4->addItem("12年(144期)",QVariant(144));
       ui->comboBox_4->addItem("11年(132期)",QVariant(132));
       ui->comboBox_4->addItem("10年(120期)",QVariant(120));
       ui->comboBox_4->addItem("9年(108期)",QVariant(108));
       ui->comboBox_4->addItem("8年(96期)",QVariant(96));
       ui->comboBox_4->addItem("7年(84期)",QVariant(84));
       ui->comboBox_4->addItem("6年(72期)",QVariant(72));
       ui->comboBox_4->addItem("5年(60期)",QVariant(60));
       ui->comboBox_4->addItem("4年(48期)",QVariant(48));
       ui->comboBox_4->addItem("3年(36期)",QVariant(36));
       ui->comboBox_4->addItem("2年(24期)",QVariant(4));
       ui->comboBox_4->addItem("1年(12期)",QVariant(12));
       ui->lineEdit_4->setPlaceholderText("请输入房屋单价      元/平方米");
       ui->lineEdit_6->setPlaceholderText("请输入房屋面积       平方米");
       ui->lineEdit_7->setPlaceholderText("请输入贷款总额            万");
       ui->lineEdit_8->setPlaceholderText("请输入贷款总额            万");
       QIntValidator *ad=new  QIntValidator(1,100000,this);

       ui->lineEdit->setValidator(ad);
       ui->lineEdit_2->setValidator(ad);
       ui->lineEdit_3->setValidator(ad);
       ui->lineEdit_4->setValidator(ad);
       ui->lineEdit_5->setValidator(ad);
       ui->lineEdit_6->setValidator(ad);
       ui->lineEdit_7->setValidator(ad);
       ui->lineEdit_8->setValidator(ad);
       ui->radioButton->setChecked(true);
       ui->comboBox_8->addItem("25年(300期)",QVariant(300));
       ui->comboBox_8->addItem("24年(288期)",QVariant(288));
       ui->comboBox_8->addItem("23年(276期)",QVariant(276));
       ui->comboBox_8->addItem("22年(264期)",QVariant(264));
       ui->comboBox_8->addItem("21年(252期)",QVariant(252));
       ui->comboBox_8->addItem("20年(240期)",QVariant(240));
       ui->comboBox_8->addItem("19年(228期)",QVariant(228));
       ui->comboBox_8->addItem("18年(216期)",QVariant(216));
       ui->comboBox_8->addItem("17年(204期)",QVariant(204));
       ui->comboBox_8->addItem("16年(192期)",QVariant(192));
       ui->comboBox_8->addItem("15年(180期)",QVariant(180));
       ui->comboBox_8->addItem("14年(168期)",QVariant(168));
       ui->comboBox_8->addItem("13年(156期)",QVariant(156));
       ui->comboBox_8->addItem("12年(144期)",QVariant(144));
       ui->comboBox_8->addItem("11年(132期)",QVariant(132));
       ui->comboBox_8->addItem("10年(120期)",QVariant(120));
       ui->comboBox_8->addItem("9年(108期)",QVariant(108));
       ui->comboBox_8->addItem("8年(96期)",QVariant(96));
       ui->comboBox_8->addItem("7年(84期)",QVariant(84));
       ui->comboBox_8->addItem("6年(72期)",QVariant(72));
       ui->comboBox_8->addItem("5年(60期)",QVariant(60));
       ui->comboBox_8->addItem("4年(48期)",QVariant(48));
       ui->comboBox_8->addItem("3年(36期)",QVariant(36));
       ui->comboBox_8->addItem("2年(24期)",QVariant(24));
       ui->comboBox_8->addItem("1年(12期)",QVariant(12));
       ui->lineEdit_3->setPlaceholderText("请输入商业贷款额         万");
       ui->lineEdit_5->setPlaceholderText("请输入公积金贷款额         万");
       ui->radioButton_3->setChecked(true);
       ui->comboBox_5->addItem("根据面积，单位计算");
       ui->comboBox_5->addItem("根据贷款总额");
       ui->comboBox_6->addItem("8成",QVariant(0.8));
       ui->comboBox_6->addItem("7.5成",QVariant(0.75));
       ui->comboBox_6->addItem("7成",QVariant(0.7));
       ui->comboBox_6->addItem("6.5成",QVariant(0.65));
       ui->comboBox_6->addItem("6成",QVariant(0.6));
       ui->comboBox_6->addItem("5.5成",QVariant(0.55));
       ui->comboBox_6->addItem("5成",QVariant(0.5));
       ui->comboBox_6->addItem("4.5成",QVariant(0.45));
       ui->comboBox_6->addItem("4成",QVariant(0.4));
       ui->comboBox_6->addItem("3.5成",QVariant(0.35));
       ui->comboBox_6->addItem("3成",QVariant(0.3));
       ui->comboBox_6->addItem("2.5成",QVariant(0.25));
       ui->comboBox_6->addItem("2成",QVariant(0.2));
       ui->comboBox_7->addItem("25年(300期)",QVariant(300));
       ui->comboBox_7->addItem("24年(288期)",QVariant(288));
       ui->comboBox_7->addItem("23年(276期)",QVariant(276));
       ui->comboBox_7->addItem("22年(264期)",QVariant(264));
       ui->comboBox_7->addItem("21年(252期)",QVariant(252));
       ui->comboBox_7->addItem("20年(240期)",QVariant(240));
       ui->comboBox_7->addItem("19年(228期)",QVariant(228));
       ui->comboBox_7->addItem("18年(216期)",QVariant(216));
       ui->comboBox_7->addItem("17年(204期)",QVariant(204));
       ui->comboBox_7->addItem("16年(192期)",QVariant(192));
       ui->comboBox_7->addItem("15年(180期)",QVariant(180));
       ui->comboBox_7->addItem("14年(168期)",QVariant(168));
       ui->comboBox_7->addItem("13年(156期)",QVariant(156));
       ui->comboBox_7->addItem("12年(144期)",QVariant(144));
       ui->comboBox_7->addItem("11年(132期)",QVariant(132));
       ui->comboBox_7->addItem("10年(120期)",QVariant(120));
       ui->comboBox_7->addItem("9年(108期)",QVariant(108));
       ui->comboBox_7->addItem("8年(96期)",QVariant(96));
       ui->comboBox_7->addItem("7年(84期)",QVariant(84));
       ui->comboBox_7->addItem("6年(72期)",QVariant(72));
       ui->comboBox_7->addItem("5年(60期)",QVariant(60));
       ui->comboBox_7->addItem("4年(48期)",QVariant(48));
       ui->comboBox_7->addItem("3年(36期)",QVariant(36));
       ui->comboBox_7->addItem("2年(24期)",QVariant(24));
       ui->comboBox_7->addItem("1年(12期)",QVariant(12));
       ui->lineEdit->setPlaceholderText("请输入房屋单价                           元/平方米");
       ui->lineEdit_2->setPlaceholderText("请输入房屋面积                          平方米");
       ui->radioButton_5->setChecked(true);
       ui->stackedWidget->setCurrentIndex(0);
       ui->stackedWidget_2->setCurrentIndex(0);
       ui->stackedWidget_3->setCurrentIndex(0);
       void(QComboBox::*p)(int index)=&QComboBox::currentIndexChanged;
       connect(ui->comboBox,p,ui->stackedWidget,&QStackedWidget::setCurrentIndex);
      connect(ui->comboBox_2,p,ui->stackedWidget_2,&QStackedWidget::setCurrentIndex);
      connect(ui->comboBox_5,p,ui->stackedWidget_3,&QStackedWidget::setCurrentIndex);
      connect(ui->pushButton,&QPushButton::clicked,[=](){

                  QString e1,e2,e3;double a,b,c,d,f,y;
                  int k=ui->comboBox_4->currentIndex();
                  QVariant  b1=ui->comboBox_4->itemData(k);
                  d=b1.toInt(); e3=ui->widget->gettext(); c=e3.toDouble();

                  if(ui->comboBox_2->currentIndex()==0)
                  {
                      int n=ui->comboBox_3->currentIndex();
                       e1=ui->lineEdit->text();
                       e2=ui->lineEdit_2->text();
                      QVariant  a1=ui->comboBox_3->itemData(n);
                      a=e1.toDouble();
                      b=e2.toDouble();
                      f=a1.toDouble();
                if(ui->lineEdit->text().isEmpty()||ui->lineEdit_2->text().isEmpty())
                 QMessageBox::warning(this,"未完成输入","请完成输入");
                else
                  if(ui->radioButton->isChecked())
                  {   y=a*b*f*c*0.01/12*qPow((1+c*0.01/12),d)/(qPow((1+c*0.01/12),d)-1);
                     ui->textEdit->append("首付:");ui->textEdit->append(QString::number(a*b*(1-f),'f',2));ui->textEdit->textCursor().insertText("元");
                     ui->textEdit->append("每月月供:");ui->textEdit->append(QString::number(y,'f',2));ui->textEdit->textCursor().insertText("元");
                     ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a*b*f,'f',2));ui->textEdit->textCursor().insertText("元");
                     ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number(y*d-a*b*f,'f',2));ui->textEdit->textCursor().insertText("元");
                     ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number(y*d,'f',2));ui->textEdit->textCursor().insertText("元");
                     ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(d));ui->textEdit->textCursor().insertText("个月");
                  }
               else {
                      double l=a*b*f/d+a*b*f*c*0.01/12;double z=a*b*f/d*c*0.01/12;double l1=d*l-d*(d-1)*z/2-a*b*f;

                      ui->textEdit->append("首付:");ui->textEdit->append(QString::number(a*b*(1-f),'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("首月月供:");ui->textEdit->append(QString::number(l,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("每月递减");ui->textEdit->append(QString::number(z,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a*b*f,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number(l1,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number(d*l-d*(d-1)*z/2,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(d));ui->textEdit->textCursor().insertText("个月");
                    }
                  }
                else if(ui->lineEdit_7->text().isEmpty())    QMessageBox::warning(this,"未完成输入","请完成输入");
                 else
                     { e1=ui->lineEdit_7->text();
                      a=10000*e1.toDouble();
                      if(ui->radioButton->isChecked())
                    {   b=a*c*0.01/12*qPow((1+c*0.01/12),d)/(qPow((1+c*0.01/12),d)-1);
                          ui->textEdit->append("每月月供:");ui->textEdit->append(QString::number(b,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number(b*d-a,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number(b*d,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(d));ui->textEdit->textCursor().insertText("个月");
                      }

                     else
                      {
                          double b=a/d+a*c*0.01/12;int y=a/d*c*0.01/12;double f=b*d-d*(d-1)*y/2;
                          ui->textEdit->append("首月月供:");ui->textEdit->append(QString::number(b,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("每月递减");ui->textEdit->append(QString::number(y,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number(f-a,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number(f,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(d));ui->textEdit->textCursor().insertText("个月");
                      }
                     }
});

      connect(ui->pushButton_5,&QPushButton::clicked,[=](){

                  QString e1,e2,e3;double a,b,c,d,f;
                  int k=ui->comboBox_7->currentIndex();
                  QVariant  b1=ui->comboBox_7->itemData(k);
                  d=b1.toInt(); e3=ui->widget_11->gettext(); c=e3.toDouble();

                  if(ui->comboBox_5->currentIndex()==0)
                  {
                      int n=ui->comboBox_6->currentIndex();
                       e1=ui->lineEdit_4->text();
                       e2=ui->lineEdit_6->text();
                      QVariant  a1=ui->comboBox_6->itemData(n);
                      a=e1.toDouble();
                      b=e2.toDouble();
                      f=a1.toDouble();
                  if(ui->lineEdit_4->text().isEmpty()||ui->lineEdit_6->text().isEmpty())
                       QMessageBox::warning(this,"未完成输入","请完成输入");
                 else if(ui->radioButton_5->isChecked())
                  {  int  y=a*b*f*c*0.01/12*qPow((1+c*0.01/12),d)/(qPow((1+c*0.01/12),d)-1);
                      ui->textEdit->append("首付:");ui->textEdit->append(QString::number(a*b*(1-f),'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("每月月供:");ui->textEdit->append(QString::number(y,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a*b*f,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number(y*d-a*b*f,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number(y*d,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(d));ui->textEdit->textCursor().insertText("个月");}
               else {
                      double  l=a*b*f/d+a*b*f*c*0.01/12;double z=a*b*f/d*c*0.01/12;int l1=d*l-d*(d-1)*z/2-a*b*f;

                      ui->textEdit->append("首付:");ui->textEdit->append(QString::number(a*b*(1-f),'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("首月月供:");ui->textEdit->append(QString::number(l,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("每月递减");ui->textEdit->append(QString::number(z,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a*b*f,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number(l1,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number(d*l-d*(d-1)*z/2,'f',2));ui->textEdit->textCursor().insertText("元");
                      ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(d));ui->textEdit->textCursor().insertText("个月");
                    }
                  }
                else if(ui->lineEdit_8->text().isEmpty())
                        QMessageBox::warning(this,"未完成输入","请完成输入");
                 else {
                      e1=ui->lineEdit_8->text();
                      a=10000*e1.toDouble();
                      if(ui->radioButton_5->isChecked())
                    {   b=a*c*0.01/12*qPow((1+c*0.01/12),d)/(qPow((1+c*0.01/12),d)-1);

                          ui->textEdit->append("每月月供:");ui->textEdit->append(QString::number(b,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number(b*d-a,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number(b*d,'f',2));ui->textEdit->textCursor().insertText("元");
                          ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(d));ui->textEdit->textCursor().insertText("个月");
                      }
                      else
                      {
                         int b2=a/d+a*c*0.01/12;int y1=a/d*c*0.01/12;int f1=b2*d-d*(d-1)*y1/2;

                         ui->textEdit->append("首月月供:");ui->textEdit->append(QString::number(b2,'f',2));ui->textEdit->textCursor().insertText("元");
                         ui->textEdit->append("每月递减");ui->textEdit->append(QString::number(y1,'f',2));ui->textEdit->textCursor().insertText("元");
                         ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a,'f',2));ui->textEdit->textCursor().insertText("元");
                         ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number(f1-a,'f',2));ui->textEdit->textCursor().insertText("元");
                         ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number(f1,'f',2));ui->textEdit->textCursor().insertText("元");
                         ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(d));ui->textEdit->textCursor().insertText("个月");
                        }
                     }
});


      connect(ui->pushButton_3,&QPushButton::clicked,[=](){
          QString e1,e2,e3,e4; double a,b,c,d,f;
           e1=ui->lineEdit_3->text();
           e2=ui->widget_19->gettext();
           e4=ui->widget_20->gettext();
           e3=ui->lineEdit_5->text();
           int k=ui->comboBox_8->currentIndex();
           QVariant  b1=ui->comboBox_8->itemData(k);
           f=b1.toInt(); a=10000*e1.toDouble();
           b=e2.toDouble(); c=10000*e3.toDouble();
           d=e4.toDouble();
           if(ui->lineEdit_3->text().isEmpty()||ui->lineEdit_5->text().isEmpty())
             QMessageBox::warning(this,"未完成输入","请完成输入");
           else if(ui->radioButton_3->isChecked())

         {
           int  a1=a*b*0.01/12*qPow((1+b*0.01/12),f)/(qPow((1+b*0.01/12),f)-1);
           int a2=c*d*0.01/12*qPow((1+d*0.01/12),f)/(qPow((1+d*0.01/12),f)-1);
           ui->textEdit->append("每月月供:");ui->textEdit->append(QString::number(a1+a2,'f',2));ui->textEdit->textCursor().insertText("元");
           ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a+c,'f',2));ui->textEdit->textCursor().insertText("元");
           ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number((a1+a2)*f-a-c,'f',2));ui->textEdit->textCursor().insertText("元");
           ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number((a1+a2)*f,'f',2));ui->textEdit->textCursor().insertText("元");
           ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(f));ui->textEdit->textCursor().insertText("个月");
        }
     else
       {

           int c1=a/f+a*b*0.01/12; int c2=c/f+c*d*0.01/12;int c3=a/f*b*0.01/12;int c4=c/f*d*0.01/12;
           int c5=c1*f-f*(f-1)*c3/2;int c6=c2*f-f*(f-1)*c4/2;
           ui->textEdit->append("首月月供:");ui->textEdit->append(QString::number(c1+c2,'f',2));ui->textEdit->textCursor().insertText("元");
           ui->textEdit->append("每月递减");ui->textEdit->append(QString::number(c3+c4,'f',2));ui->textEdit->textCursor().insertText("元");
           ui->textEdit->append("贷款总额:");ui->textEdit->append(QString::number(a+c,'f',2));ui->textEdit->textCursor().insertText("元");
           ui->textEdit->append("支付利息:");ui->textEdit->append(QString::number(c5+c6-a-c,'f',2));ui->textEdit->textCursor().insertText("元");
           ui->textEdit->append("还款总额:");ui->textEdit->append(QString::number(c5+c6,'f',2));ui->textEdit->textCursor().insertText("元");
           ui->textEdit->append("还款月数:");ui->textEdit->append(QString::number(f));ui->textEdit->textCursor().insertText("个月");
         }
      });
      connect(ui->pushButton_2,&QPushButton::clicked,[=]{
          ui->textEdit->clear();ui->lineEdit->clear();
          ui->lineEdit_2->clear();ui->lineEdit_7->clear();
          ui->widget->setclear();ui->stackedWidget_2->setCurrentIndex(0);
          ui->radioButton->setChecked(true);ui->comboBox_3->setCurrentIndex(0);
          ui->comboBox_2->setCurrentIndex(0);ui->comboBox_4->setCurrentIndex(0);
      });
      connect(ui->pushButton_6,&QPushButton::clicked,[=]{
          ui->textEdit->clear();ui->lineEdit_4->clear();
          ui->lineEdit_6->clear();ui->lineEdit_7->clear();
          ui->widget_11->setclear();ui->stackedWidget_3->setCurrentIndex(0);
          ui->radioButton_5->setChecked(true);ui->comboBox_6->setCurrentIndex(0);
          ui->comboBox_7->setCurrentIndex(0);ui->comboBox_5->setCurrentIndex(0);
      });
      connect(ui->pushButton_4,&QPushButton::clicked,[=]{
          ui->textEdit->clear();ui->lineEdit_3->clear();
          ui->lineEdit_5->clear(); ui->widget_20->setclear();
          ui->widget_19->setclear();ui->comboBox_8->setCurrentIndex(0);
          ui->radioButton_5->setChecked(true);
      });
      connect(ui->comboBox,p,[=](){ui->pushButton_2->clicked();ui->pushButton_4->clicked();ui->pushButton_6->clicked();});
      connect(ui->comboBox_2,p,[=](){ui->textEdit->clear();ui->lineEdit->clear();
          ui->lineEdit_2->clear(); ui->lineEdit_7->clear();
      });
      connect(ui->comboBox_3,p,[=](){ui->textEdit->clear();});
      connect(ui->comboBox_4,p,[=](){ui->textEdit->clear();});
      connect(ui->comboBox_5,p,[=](){ui->pushButton_2->clicked();ui->textEdit->clear(); ui->lineEdit_4->clear();
           ui->lineEdit_6->clear(); ui->lineEdit_8->clear();
      });
      connect(ui->comboBox_6,p,[=](){ui->textEdit->clear();});
      connect(ui->comboBox_7,p,[=](){ui->textEdit->clear();});
      connect(ui->comboBox_8,p,[=](){ui->textEdit->clear();});
      connect(ui->lineEdit,&QLineEdit::textChanged,[=](){ui->textEdit->clear();   });
      connect(ui->lineEdit_2,&QLineEdit::textChanged,[=](){ui->textEdit->clear();   });
      connect(ui->lineEdit_3,&QLineEdit::textChanged,[=](){ui->textEdit->clear();   });
      connect(ui->lineEdit_4,&QLineEdit::textChanged,[=](){ui->textEdit->clear();   });
      connect(ui->lineEdit_5,&QLineEdit::textChanged,[=](){ui->textEdit->clear();   });
      connect(ui->lineEdit_6,&QLineEdit::textChanged,[=](){ui->textEdit->clear();   });
      connect(ui->lineEdit_7,&QLineEdit::textChanged,[=](){ui->textEdit->clear();   });
      connect(ui->lineEdit_8,&QLineEdit::textChanged,[=](){ui->textEdit->clear();   });
      connect(ui->radioButton,&QRadioButton::clicked,[=](){ui->textEdit->clear(); });
      connect(ui->radioButton_2,&QRadioButton::clicked,[=](){ui->textEdit->clear(); });
      connect(ui->radioButton_3,&QRadioButton::clicked,[=](){ui->textEdit->clear(); });
      connect(ui->radioButton_4,&QRadioButton::clicked,[=](){ui->textEdit->clear(); });
      connect(ui->radioButton_5,&QRadioButton::clicked,[=](){ui->textEdit->clear(); });
      connect(ui->radioButton_6,&QRadioButton::clicked,[=](){ui->textEdit->clear(); });
 }

Widget::~Widget()
{
    delete ui;
}

