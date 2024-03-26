#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QSpinBox>
void MainWindow::changedItemCaption(QTreeWidgetItem *item)
{
    QString str = "*" + item->text(colItem);
    item->setText(colItem, str);
    if(item->childCount() > 0)
        for(int i = 0; i < item->childCount(); ++i)
            changedItemCaption(item->child(i));
}

void MainWindow::displayImage(QTreeWidgetItem *item)
{
    QString filename = item->data(colItem, Qt::UserRole).toString();
    labFileName->setText(filename);
    labNodeText->setText(item->text(colItem));
    m_pixmap.load(filename);
    ui->actZoomFitH->triggered();

    ui->actZoomFitH->setEnabled(true);
    ui->actZoomFitW->setEnabled(true);
    ui->actZoomIn->setEnabled(true);
    ui->actZoomOut->setEnabled(true);
    ui->actZoomRealSize->setEnabled(true);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->clear();
    //  header
    QTreeWidgetItem *header = new QTreeWidgetItem();
    header->setText(colItem, "目录和文件");
    header->setText(MainWindow::colItemType, "节点类型");
    header->setText(colDate, "最后的修改日期");

    header->setTextAlignment(colItem, Qt::AlignHCenter | Qt::AlignVCenter);
    header->setTextAlignment(colItemType, Qt::AlignHCenter | Qt::AlignVCenter);
    ui->treeWidget->setHeaderItem(header);
    //添加一个根节点
    QIcon icon(":/images/icons/15.ico");
    QTreeWidgetItem *topItem = new QTreeWidgetItem(itTopItem);
    topItem->setText(colItem, "图片");
    topItem->setText(colItemType, "Top Item");
    topItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    topItem->setCheckState(colItem, Qt::Checked);
    ui->treeWidget->addTopLevelItem(topItem);

    //status bar
    labNodeText = new QLabel("节点标题", this);
    labNodeText->setMinimumWidth(200);
    ui->statusbar->addWidget(labNodeText);

    spinRatio = new QSpinBox(this);
    spinRatio->setRange(0, 2000);
    spinRatio->setValue(100);
    spinRatio->setSuffix(" %");
    spinRatio->setReadOnly(true);
    spinRatio->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->statusbar->addPermanentWidget(spinRatio);

    labFileName = new QLabel("文件名", this);
    ui->statusbar->addPermanentWidget(labFileName);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actAddFolder_triggered()
{
    QString dir = QFileDialog::getExistingDirectory();
    if(dir.isEmpty()) return;

    QTreeWidgetItem *parItem = ui->treeWidget->currentItem();
    if(parItem == nullptr) return;

    if(parItem->type() != itImageItem)
    {
        int cnt = dir.length();
        int i = dir.lastIndexOf("/");
        QString nodeName = dir.right(cnt-i-1);

        QTreeWidgetItem *item = new QTreeWidgetItem(itTopItem);
        QIcon icon(":/images/icons/open3.bmp");
        item->setIcon(colItem, icon);
        item->setText(colItemType, "Group Item");
        item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
        item->setCheckState(colItem, Qt::Checked);
        item->setData(colItem, Qt::UserRole, QVariant(dir));
        parItem->addChild(item);
    }
}


void MainWindow::on_actAddFiles_triggered()
{
    QStringList files = QFileDialog::getOpenFileNames(this, "选择文件", "", "Images(*.jpg)");
    if(files.isEmpty()) return;

    QTreeWidgetItem *parItem, *item;
    item = ui->treeWidget->currentItem();
    if(item == nullptr) item = ui->treeWidget->topLevelItem(0);
    if(item->type() == itImageItem)
        parItem = item->parent();
    else
        parItem = item;

    for(int i = 0; i < files.size(); ++i)
    {
        QString fileName = files.at(i);
        QIcon icon(":/images/icons/31.ico");
        QFileInfo fileInfo(fileName);
        QString NodeText = fileInfo.fileName();
        QDateTime dateTime = fileInfo.lastModified();
        QTreeWidgetItem *item = new QTreeWidgetItem(itImageItem);
        item->setIcon(colItem, icon);
        item->setText(colItem, NodeText);
        item->setText(colItemType, "Image Item");
        item->setText(colDate, dateTime.toString("yyyy-MM-dd"));
        item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
        item->setCheckState(colItem, Qt::Checked);
        item->setData(colItem, Qt::UserRole, QVariant(fileName));
        parItem->addChild(item);
        parItem->setExpanded(true);
    }

}


void MainWindow::on_actDeleteItem_triggered()
{
    QTreeWidgetItem *item = ui->treeWidget->currentItem();
    if(item == nullptr) return;
    QTreeWidgetItem *parItem = item->parent();
    parItem->removeChild(item);
}


void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    if(current == nullptr || current == previous) return;

    switch(current->type())
    {
    case itTopItem:
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(false);
        break;
    case itGroupItem:
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(false);
        break;
    case itImageItem:
        ui->actAddFolder->setEnabled(false);
        ui->actAddFiles->setEnabled(true);
        ui->actDeleteItem->setEnabled(true);
        displayImage(current);
        break;
    }


}


void MainWindow::on_actScanItems_triggered()
{
    for(int i = 0; i < ui->treeWidget->topLevelItemCount(); ++i)
    {
        changedItemCaption(ui->treeWidget->topLevelItem(i));
    }
}





void MainWindow::on_actZoomFitH_triggered()
{
    int h = ui->scrollArea->height()-30;
    int realh = m_pixmap.height();
    m_ratio = float(h) / realh;

    spinRatio->setValue(m_ratio*100);
    QPixmap pix = m_pixmap.scaledToHeight(h-30);
    ui->labPic->setPixmap(pix);
}


void MainWindow::on_actZoomFitW_triggered()
{
    int w = ui->scrollArea->width()-30;
    int realw = m_pixmap.width();
    m_ratio = float(w) / realw;

    spinRatio->setValue(m_ratio*100);
    QPixmap pix = m_pixmap.scaledToWidth(w-30);
    ui->labPic->setPixmap(pix);
}


void MainWindow::on_actZoomRealSize_triggered()
{
    ui->labPic->setPixmap(m_pixmap);
    m_ratio = 1;
    spinRatio->setValue(100);

}


void MainWindow::on_actZoomIn_triggered()
{
    m_ratio *= 1.2;
    int w = m_ratio *m_pixmap.width();
    int h = m_ratio *m_pixmap.height();
    ui->labPic->setPixmap(m_pixmap.scaled(w, h));
    spinRatio->setValue(100*m_ratio);

}


void MainWindow::on_actZoomOut_triggered()
{
    m_ratio *= 0.8;
    int w = m_ratio *m_pixmap.width();
    int h = m_ratio *m_pixmap.height();
    ui->labPic->setPixmap(m_pixmap.scaled(w, h));
    spinRatio->setValue(100*m_ratio);
}


void MainWindow::on_actDockVisible_triggered(bool checked)
{
    ui->actDockVisible->setVisible(checked);
}


void MainWindow::on_actDockFloat_triggered(bool checked)
{
    ui->dockWidget->setFloating(checked);
}


void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    ui->actDockVisible->setChecked(visible);
}


void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{
    ui->actDockFloat->setChecked(topLevel);
}

