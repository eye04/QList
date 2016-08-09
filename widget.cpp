#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton *btn ;//= new QPushButton(this);

    QList <QPushButton*> list;
    QList<QString> list1;
    QStringList list2;
    list2<<"aa"<<"bb"<<"cc"<<"dd";
    list2.append("aa");
    list2[2]="zz";


    for(int i=0; i<10; i++)
    {
        btn = new QPushButton(this);

        btn->move(0, i*20);

        list.append(btn);

        if(list2.length()>i)
            btn->setText(list2.at(i));

    }

    list.clear();


}

Widget::~Widget()
{
    delete ui;
}
