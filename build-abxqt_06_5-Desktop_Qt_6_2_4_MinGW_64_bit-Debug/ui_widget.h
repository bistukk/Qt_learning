/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioBtnListSrouce;
    QRadioButton *radioBtnListWidget;
    QRadioButton *radioBtnTreeWidget;
    QRadioButton *radioBtnTableWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *chkBoxAcceptDrops;
    QCheckBox *chkBoxDragEnabled;
    QLabel *labDragDrogMode;
    QComboBox *comboBoxMode;
    QLabel *labDefaultAction;
    QComboBox *comboBoxDefaultAction;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_listSource;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listSource;
    QGroupBox *groupBox_listWidget;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QGroupBox *groupBox_treeWidget;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_tableWidget;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(519, 409);
        verticalLayout_6 = new QVBoxLayout(Widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioBtnListSrouce = new QRadioButton(groupBox);
        radioBtnListSrouce->setObjectName(QString::fromUtf8("radioBtnListSrouce"));
        radioBtnListSrouce->setChecked(true);

        verticalLayout->addWidget(radioBtnListSrouce);

        radioBtnListWidget = new QRadioButton(groupBox);
        radioBtnListWidget->setObjectName(QString::fromUtf8("radioBtnListWidget"));

        verticalLayout->addWidget(radioBtnListWidget);

        radioBtnTreeWidget = new QRadioButton(groupBox);
        radioBtnTreeWidget->setObjectName(QString::fromUtf8("radioBtnTreeWidget"));

        verticalLayout->addWidget(radioBtnTreeWidget);

        radioBtnTableWidget = new QRadioButton(groupBox);
        radioBtnTableWidget->setObjectName(QString::fromUtf8("radioBtnTableWidget"));

        verticalLayout->addWidget(radioBtnTableWidget);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        chkBoxAcceptDrops = new QCheckBox(groupBox_2);
        chkBoxAcceptDrops->setObjectName(QString::fromUtf8("chkBoxAcceptDrops"));

        gridLayout->addWidget(chkBoxAcceptDrops, 0, 0, 1, 1);

        chkBoxDragEnabled = new QCheckBox(groupBox_2);
        chkBoxDragEnabled->setObjectName(QString::fromUtf8("chkBoxDragEnabled"));
        chkBoxDragEnabled->setChecked(true);

        gridLayout->addWidget(chkBoxDragEnabled, 0, 1, 1, 1);

        labDragDrogMode = new QLabel(groupBox_2);
        labDragDrogMode->setObjectName(QString::fromUtf8("labDragDrogMode"));

        gridLayout->addWidget(labDragDrogMode, 1, 0, 1, 1);

        comboBoxMode = new QComboBox(groupBox_2);
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->setObjectName(QString::fromUtf8("comboBoxMode"));

        gridLayout->addWidget(comboBoxMode, 1, 1, 1, 1);

        labDefaultAction = new QLabel(groupBox_2);
        labDefaultAction->setObjectName(QString::fromUtf8("labDefaultAction"));

        gridLayout->addWidget(labDefaultAction, 2, 0, 1, 1);

        comboBoxDefaultAction = new QComboBox(groupBox_2);
        comboBoxDefaultAction->addItem(QString());
        comboBoxDefaultAction->addItem(QString());
        comboBoxDefaultAction->addItem(QString());
        comboBoxDefaultAction->addItem(QString());
        comboBoxDefaultAction->setObjectName(QString::fromUtf8("comboBoxDefaultAction"));

        gridLayout->addWidget(comboBoxDefaultAction, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_listSource = new QGroupBox(Widget);
        groupBox_listSource->setObjectName(QString::fromUtf8("groupBox_listSource"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        groupBox_listSource->setFont(font);
        groupBox_listSource->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_2 = new QVBoxLayout(groupBox_listSource);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listSource = new QListWidget(groupBox_listSource);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listSource);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/120.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listSource);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listSource);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/BLD.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listSource);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/ITL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listSource);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/428.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listSource);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/423.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listSource);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/421.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listSource);
        __qlistwidgetitem7->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/427.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listSource);
        __qlistwidgetitem8->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listSource);
        __qlistwidgetitem9->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listSource);
        __qlistwidgetitem10->setIcon(icon10);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/105.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listSource);
        __qlistwidgetitem11->setIcon(icon11);
        listSource->setObjectName(QString::fromUtf8("listSource"));

        verticalLayout_2->addWidget(listSource);


        horizontalLayout_2->addWidget(groupBox_listSource);

        groupBox_listWidget = new QGroupBox(Widget);
        groupBox_listWidget->setObjectName(QString::fromUtf8("groupBox_listWidget"));
        groupBox_listWidget->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_3 = new QVBoxLayout(groupBox_listWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listWidget = new QListWidget(groupBox_listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);


        horizontalLayout_2->addWidget(groupBox_listWidget);

        groupBox_treeWidget = new QGroupBox(Widget);
        groupBox_treeWidget->setObjectName(QString::fromUtf8("groupBox_treeWidget"));
        groupBox_treeWidget->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_4 = new QVBoxLayout(groupBox_treeWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        treeWidget = new QTreeWidget(groupBox_treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout_4->addWidget(treeWidget);


        horizontalLayout_2->addWidget(groupBox_treeWidget);

        groupBox_tableWidget = new QGroupBox(Widget);
        groupBox_tableWidget->setObjectName(QString::fromUtf8("groupBox_tableWidget"));
        groupBox_tableWidget->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_5 = new QVBoxLayout(groupBox_tableWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tableWidget = new QTableWidget(groupBox_tableWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_5->addWidget(tableWidget);


        horizontalLayout_2->addWidget(groupBox_tableWidget);


        verticalLayout_6->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\257\271\350\261\241", nullptr));
        radioBtnListSrouce->setText(QCoreApplication::translate("Widget", "listSource", nullptr));
        radioBtnListWidget->setText(QCoreApplication::translate("Widget", "listWidget", nullptr));
        radioBtnTreeWidget->setText(QCoreApplication::translate("Widget", "treeWidget", nullptr));
        radioBtnTableWidget->setText(QCoreApplication::translate("Widget", "tableWidget", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        chkBoxAcceptDrops->setText(QCoreApplication::translate("Widget", "acceptDDrops", nullptr));
        chkBoxDragEnabled->setText(QCoreApplication::translate("Widget", "dragEnabled", nullptr));
        labDragDrogMode->setText(QCoreApplication::translate("Widget", "dragDrogMode", nullptr));
        comboBoxMode->setItemText(0, QCoreApplication::translate("Widget", "DragDrop", nullptr));
        comboBoxMode->setItemText(1, QCoreApplication::translate("Widget", "NoDragDrop", nullptr));
        comboBoxMode->setItemText(2, QCoreApplication::translate("Widget", "DragOnly", nullptr));
        comboBoxMode->setItemText(3, QCoreApplication::translate("Widget", "DropOnly", nullptr));
        comboBoxMode->setItemText(4, QCoreApplication::translate("Widget", "intemalMove", nullptr));

        labDefaultAction->setText(QCoreApplication::translate("Widget", "defaultDropAction", nullptr));
        comboBoxDefaultAction->setItemText(0, QCoreApplication::translate("Widget", "CopyAction", nullptr));
        comboBoxDefaultAction->setItemText(1, QCoreApplication::translate("Widget", "MoveAction", nullptr));
        comboBoxDefaultAction->setItemText(2, QCoreApplication::translate("Widget", "LinkAction", nullptr));
        comboBoxDefaultAction->setItemText(3, QCoreApplication::translate("Widget", "ignoreAction", nullptr));

        groupBox_listSource->setTitle(QCoreApplication::translate("Widget", "listSource", nullptr));

        const bool __sortingEnabled = listSource->isSortingEnabled();
        listSource->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listSource->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Widget", "\345\211\252\345\210\207", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listSource->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Widget", "\345\244\215\345\210\266", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listSource->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Widget", "\347\262\230\350\264\264", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listSource->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listSource->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listSource->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listSource->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("Widget", "\345\267\246\345\257\271\351\275\220", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listSource->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("Widget", "\344\270\255\351\227\264\345\257\271\351\275\220", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listSource->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("Widget", "\345\217\263\345\257\271\351\275\220", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listSource->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("Widget", "\347\272\242\350\211\262", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listSource->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("Widget", "\347\273\277\350\211\262", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listSource->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("Widget", "\350\223\235\350\211\262", nullptr));
        listSource->setSortingEnabled(__sortingEnabled);

        groupBox_listWidget->setTitle(QCoreApplication::translate("Widget", "listWidget", nullptr));
        groupBox_treeWidget->setTitle(QCoreApplication::translate("Widget", "treeWidget", nullptr));
        groupBox_tableWidget->setTitle(QCoreApplication::translate("Widget", "tableWidget", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Widget", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Widget", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Widget", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Widget", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Widget", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Widget", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
