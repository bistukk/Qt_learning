#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //treeWidget树控件使用

    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList() << "英雄" << "英雄介绍");

    QTreeWidgetItem * liItem = new QTreeWidgetItem(QStringList() << "力量");
    QTreeWidgetItem * minItem = new QTreeWidgetItem(QStringList() << "敏捷");
    QTreeWidgetItem * zhiItem = new QTreeWidgetItem(QStringList() << "智力");
    //加载顶层的节点
    ui->treeWidget->addTopLevelItem(liItem);
    ui->treeWidget->addTopLevelItem(minItem);
    ui->treeWidget->addTopLevelItem(zhiItem);

    //追加子节点
    QStringList heroL1;
    heroL1 << "刚被猪" << "前排坦克，能在吸收伤害的同时造成客观的范围输出";
    QTreeWidgetItem * l1 = new QTreeWidgetItem(heroL1);
    liItem->addChild(l1);
    QStringList heroL2;
    heroL2 << "船长" << "前排坦克，能肉能输出能控场的全能英雄";
    QTreeWidgetItem * l2 = new QTreeWidgetItem(heroL2);
    liItem->addChild(l2);

    QStringList heroL3;
    heroL3 << "月骑" << "中排物理输出，可以使用分裂和利刃攻击多个目标";
    QTreeWidgetItem * l3 = new QTreeWidgetItem(heroL3);
    minItem->addChild(l3);
    QStringList heroL4;
    heroL4 << "小鱼人" << "前排战士，擅长偷取敌人的属性来增强自身战力";
    QTreeWidgetItem * l4 = new QTreeWidgetItem(heroL4);
    minItem->addChild(l4);

    QStringList heroL5;
    heroL5 << "死灵法师" << "前排法师坦克，魔法抗性高，拥有治疗技能";
    QTreeWidgetItem * l5 = new QTreeWidgetItem(heroL5);
    zhiItem->addChild(l5);
    QStringList heroL6;
    heroL6 << "巫医" << "后排辅助法师，可以使用奇特的巫术诅咒敌人与治疗队友";
    QTreeWidgetItem * l6 = new QTreeWidgetItem(heroL6);
    zhiItem->addChild(l6);
}

Widget::~Widget()
{
    delete ui;
}

