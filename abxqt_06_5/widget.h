#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
class QAbstractItemView;
class QGroupBox;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

private:
    QAbstractItemView *m_itemView = nullptr;
    void refreshToUI(QGroupBox *curGroupBox);

    int getDropActionIndex(Qt::DropAction actionType);
    Qt::DropAction getDropActionType(int index);

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_radioBtnListWidget_clicked();

    void on_radioBtnListSrouce_clicked();

    void on_radioBtnTreeWidget_clicked();

    void on_radioBtnTableWidget_clicked();

    void on_chkBoxAcceptDrops_clicked(bool checked);

    void on_chkBoxDragEnabled_clicked(bool checked);

    void on_comboBoxMode_currentIndexChanged(int index);

    void on_comboBoxDefaultAction_currentIndexChanged(int index);

private:
    Ui::Widget *ui;

    // QObject interface
public:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;
};


#endif // WIDGET_H
