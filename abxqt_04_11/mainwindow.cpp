#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tBtnListIni->setDefaultAction(ui->actListIni);
    ui->tBtnListClear->setDefaultAction(ui->actListClear);
    ui->tBtnListInsert->setDefaultAction(ui->actListInsert);
    ui->tBtnListAppend->setDefaultAction(ui->actListappend);
    ui->tBtnListDelete->setDefaultAction(ui->actListDelete);

    ui->tBtnSelALL->setDefaultAction(ui->actSelAll);
    ui->tBtnSelNone->setDefaultAction(ui->actSelNone);
    ui->tBtnSelInvs->setDefaultAction(ui->actSelInvs);

    QMenu* menuSelection = new QMenu(this);
    menuSelection->addAction(ui->actSelAll);
    menuSelection->addAction(ui->actSelNone);
    menuSelection->addAction(ui->actSelInvs);

    ui->tBtnSeleltItem->setPopupMode(QToolButton::MenuButtonPopup);
    ui->tBtnSeleltItem->setMenu(menuSelection);

    QToolButton *aBtn = new QToolButton(this);
    aBtn->setPopupMode(QToolButton::MenuButtonPopup);
    aBtn->setText("选择选项");
    aBtn->setIcon(QIcon(":/icons/icons/424.bmp"));
    aBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    aBtn->setMenu(menuSelection);
    ui->toolBar->addWidget(aBtn);

    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actQuit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actListIni_triggered()
{
    QListWidgetItem *aItem;
    ui->listWidget->clear();
    QIcon aIcon;
    aIcon.addFile(":/icons/icons/check2.ico");
    bool chk = ui->chkListEditable->isChecked();
    for(int i = 0; i < 10; ++i){
        aItem = new QListWidgetItem();
        aItem->setText("Item" + QString::number(i));
        aItem->setIcon(aIcon);
        aItem->setCheckState(Qt::Checked);
        if(chk)
            aItem->setFlags(Qt::ItemIsEditable | Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        else
            aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        ui->listWidget->addItem(aItem);
    }
}


void MainWindow::on_actListClear_triggered()
{
    ui->listWidget->clear();
}


void MainWindow::on_actListInsert_triggered()
{
    QIcon aIcon(":/icons/icons/check2.ico");
    bool chk = ui->chkListEditable->isChecked();

    QListWidgetItem *aItem = new QListWidgetItem();
    aItem->setText("Item Inserted");
    aItem->setIcon(aIcon);
    aItem->setCheckState(Qt::Checked);
    if(chk)
        aItem->setFlags(Qt::ItemIsEditable | Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    else
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    ui->listWidget->insertItem(ui->listWidget->currentRow(), aItem);

}


void MainWindow::on_actListappend_triggered()
{
    QIcon aIcon(":/icons/icons/check2.ico");
    bool chk = ui->chkListEditable->isChecked();

    QListWidgetItem *aItem = new QListWidgetItem();
    aItem->setText("Item added");
    aItem->setIcon(aIcon);
    aItem->setCheckState(Qt::Checked);
    if(chk)
        aItem->setFlags(Qt::ItemIsEditable | Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    else
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    ui->listWidget->insertItem(ui->listWidget->currentRow(), aItem);

}


void MainWindow::on_actListDelete_triggered()
{
    int row = ui->listWidget->currentRow();
    delete ui->listWidget->takeItem(row);

}


void MainWindow::on_actSelAll_triggered()
{
    int cnt = ui->listWidget->count();
    for(int i = 0; i < cnt; ++i){
        QListWidgetItem *aItem = ui ->listWidget ->item(i);
        aItem->setCheckState(Qt::Checked);
    }
}


void MainWindow::on_actSelNone_triggered()
{
    int cnt = ui->listWidget->count();
    for(int i = 0; i < cnt; ++i){
        QListWidgetItem *aItem = ui ->listWidget ->item(i);
        aItem->setCheckState(Qt::Unchecked);
    }
}


void MainWindow::on_actSelInvs_triggered()
{
    int cnt = ui->listWidget->count();
    for(int i = 0; i < cnt; ++i){
        QListWidgetItem *aItem = ui ->listWidget ->item(i);
        if(aItem->checkState() == Qt::Checked)
            aItem->setCheckState(Qt::Unchecked);
        else
            aItem->setCheckState(Qt::Checked);

    }
}


void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    QString str;
    if(current != NULL)
    {
        if(previous == NULL)
            str = "当前项：" + current->text();
        else
            str = "前一项：" + previous->text()+ ";当前项：" + current->text();

        ui->editCurrntItemText->setText(str);
    }

    ui->plainTextEdit->appendPlainText("currentItemChanged()信号被发射");
}


void MainWindow::on_chkBoxSorting_clicked(bool checked)
{
    ui->listWidget->setSortingEnabled(checked);
}


void MainWindow::on_tBtnSortAsc_clicked()
{
    ui->listWidget->sortItems(Qt::AscendingOrder);
}


void MainWindow::on_tBtnSortDes_clicked()
{
    ui->listWidget->sortItems(Qt::DescendingOrder);
}


void MainWindow::on_tBtnClearText_clicked()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_tBtnAddLine_clicked()
{
    ui->plainTextEdit->appendPlainText("");
}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    ui->plainTextEdit->appendPlainText("itemDoubleClicked:" + item->text());

}


void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu * menuList = new QMenu(this);
    menuList->addAction(ui->actListIni);
    menuList->addAction(ui->actListClear);
    menuList->addAction(ui->actListInsert);
    menuList->addAction(ui->actListappend);
    menuList->addAction(ui->actListDelete);
    menuList->addSeparator();
    menuList->addAction(ui->actSelAll);
    menuList->addAction(ui->actSelNone);
    menuList->addAction(ui->actSelInvs);
    menuList->exec(QCursor::pos());
    delete menuList;

}

