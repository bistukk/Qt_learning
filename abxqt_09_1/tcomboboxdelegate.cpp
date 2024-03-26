#include "tcomboboxdelegate.h"
#include <QComboBox>
tcomboboxdelegate::tcomboboxdelegate(QObject *parent):QStyledItemDelegate(parent)
{

}

void tcomboboxdelegate::setItems(QStringList items, bool editable)
{
    m_itemList = items;
    m_editable = editable;
}

QWidget *tcomboboxdelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    QComboBox *editor = new QComboBox(parent);
    editor->setEditable(m_editable);
    for(auto &item : m_itemList)
    {
        editor->addItem(item);
    }
    return editor;
}

void tcomboboxdelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QComboBox *comboBox = dynamic_cast<QComboBox*>(editor);
    QString str = index.model()->data(index, Qt::EditRole).toString();
    comboBox->setCurrentText(str);

}

void tcomboboxdelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QComboBox *comboBox = dynamic_cast<QComboBox*>(editor);
    QString str = comboBox->currentText();
    model->setData(index, str, Qt::EditRole);
}

void tcomboboxdelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    editor->setGeometry(option.rect);
}
