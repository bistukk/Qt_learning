#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include <QWidget>

class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyCoin(QWidget *parent = nullptr);

    //参数代表 传入的金币路径 还是银币路径
    MyCoin(QString btnImg);

signals:

};

#endif // MYCOIN_H
