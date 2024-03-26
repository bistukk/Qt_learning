#include "widget.h"
#include "ui_widget.h"
#include <QAbstractItemView>
#include <QGroupBox>
#include <QKeyEvent>
void Widget::refreshToUI(QGroupBox *curGroupBox)
{
    ui->chkBoxAcceptDrops->setChecked(m_itemView->acceptDrops());
    ui->chkBoxDragEnabled->setChecked(m_itemView->dragEnabled());

    ui->comboBoxMode->setCurrentIndex((int)m_itemView->dragDropMode());
    int index = getDropActionIndex(m_itemView->defaultDropAction());
    ui->comboBoxDefaultAction->setCurrentIndex(index);

    QFont font = ui->groupBox->font();
    font.setBold(false);

    ui->groupBox_listSource->setFont(font);
    ui->groupBox_listWidget->setFont(font);
    ui->groupBox_treeWidget->setFont(font);
    ui->groupBox_tableWidget->setFont(font);

    font.setBold(true);
    curGroupBox->setFont(font);
}

int Widget::getDropActionIndex(Qt::DropAction actionType)
{
    // CopyAction = 0x1,
    // MoveAction = 0x2,
    // LinkAction = 0x4,
    // IgnoreAction = 0x0
    switch(actionType)
    {
    case Qt::CopyAction:
        return 0;
    case Qt::MoveAction:
        return 1;
    case Qt::LinkAction:
        return 2;
    case Qt::IgnoreAction:
        return 3;
    default:
        return 0;
    }
}

Qt::DropAction Widget::getDropActionType(int index)
{
    switch(index)
    {
    case 0:
        return Qt::CopyAction;
    case 1:
        return Qt::MoveAction;
    case 2:
        return Qt::LinkAction;
    case 3:
        return Qt::IgnoreAction;
    default:
        return Qt::CopyAction;
    }

    // CopyAction = 0x1,
    // MoveAction = 0x2,
    // LinkAction = 0x4,
    // IgnoreAction = 0x0
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    m_itemView = ui->listSource;
    refreshToUI(ui->groupBox_listSource);
    ui->listSource->setAcceptDrops(true);
    ui->listSource->setDragEnabled(true);
    ui->listSource->setDefaultDropAction(Qt::CopyAction);
    ui->listSource->setDragDropMode(QAbstractItemView::DragDrop);

    ui->listWidget->setAcceptDrops(true);
    ui->listWidget->setDragEnabled(true);
    ui->listWidget->setDefaultDropAction(Qt::CopyAction);
    ui->listWidget->setDragDropMode(QAbstractItemView::DragDrop);

    ui->treeWidget->setAcceptDrops(true);
    ui->treeWidget->setDragEnabled(true);
    ui->treeWidget->setDefaultDropAction(Qt::CopyAction);
    ui->treeWidget->setDragDropMode(QAbstractItemView::DragDrop);

    ui->tableWidget->setAcceptDrops(true);
    ui->tableWidget->setDragEnabled(true);
    ui->tableWidget->setDefaultDropAction(Qt::MoveAction);
    ui->tableWidget->setDragDropMode(QAbstractItemView::DragDrop);

    ui->listSource->installEventFilter(this);
    ui->listWidget->installEventFilter(this);
    ui->treeWidget->installEventFilter(this);
    ui->tableWidget->installEventFilter(this);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_radioBtnListWidget_clicked()
{
    m_itemView = ui->listWidget;
    refreshToUI(ui->groupBox_listWidget);
}


void Widget::on_radioBtnListSrouce_clicked()
{
    m_itemView = ui->listSource;
    refreshToUI(ui->groupBox_listSource);
}


void Widget::on_radioBtnTreeWidget_clicked()
{
    m_itemView = ui->treeWidget;
    refreshToUI(ui->groupBox_treeWidget);
}


void Widget::on_radioBtnTableWidget_clicked()
{
    m_itemView = ui->tableWidget;
    refreshToUI(ui->groupBox_tableWidget);
}


void Widget::on_chkBoxAcceptDrops_clicked(bool checked)
{
    m_itemView->setAcceptDrops(checked);
}


void Widget::on_chkBoxDragEnabled_clicked(bool checked)
{
    m_itemView->setDragEnabled(checked);
}


void Widget::on_comboBoxMode_currentIndexChanged(int index)
{
    m_itemView->setDragDropMode((QAbstractItemView::DragDropMode)index);
}


void Widget::on_comboBoxDefaultAction_currentIndexChanged(int index)
{
    m_itemView->setDefaultDropAction(getDropActionType(index));
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    qDebug() << "eventFilter 被调用，watched:" << watched;
    qDebug() << "Event type:" << event->type();
    if(event->type() != QEvent::KeyPress)
    {
        qDebug() << "执行了第一个if" << Qt::endl;
        return QWidget::eventFilter(watched, event);
    }


    QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);

    qDebug() << "Key pressed:" << keyEvent->key();
    qDebug() << "Key text:" << QKeySequence(keyEvent->key()).toString();
    if(keyEvent->key() != Qt::Key_Delete && keyEvent->key() != Qt::Key_Backspace)
    {
        qDebug() << "执行了第二个if" << Qt::endl;
        return QWidget::eventFilter(watched, event);
    }


    qDebug() << "watched == ui->listSource:" << (watched == ui->listSource);
    if(watched == ui->listSource)
    {
        qDebug() << "Current row in listSource:" << ui->listSource->currentRow();
        delete ui->listSource->takeItem(ui->listSource->currentRow());
        qDebug() << "listSource被删除了" << Qt::endl;
    }
    else if(watched == ui->listWidget)
    {
        delete ui->listWidget->takeItem((ui->listWidget->currentRow()));
    }
    else if(watched == ui->treeWidget)
    {
        QTreeWidgetItem *curItem = ui->treeWidget->currentItem();
        if(curItem->parent() != nullptr)
        {
            curItem->parent()->removeChild(curItem);
        }
        else
        {
            int index = ui->treeWidget->indexOfTopLevelItem(curItem);
            ui->treeWidget->takeTopLevelItem(index);
        }
        delete curItem;

    }
    else if(watched == ui->tableWidget)
    {
        delete ui->tableWidget->takeItem(ui->tableWidget->currentRow(),
                                         ui->tableWidget->currentColumn());
    }
    return true;
}
