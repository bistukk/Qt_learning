#ifndef TPERSON_H
#define TPERSON_H

#include <QObject>

class TPerson : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author", "Wang")
    Q_CLASSINFO("Company", "UPC")
    Q_CLASSINFO("version", "2.0.0")

    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString name MEMBER m_name)
    Q_PROPERTY(int score MEMBER m_score)

public:
    explicit TPerson(QString name, QObject *parent = nullptr);
    ~TPerson();
    int age();
    void setAge(quint8 ageValue);
    void incAge();
signals:
    void ageChanged(int ageValue);
private:
    //QString m_sex;
    QString m_name;
    int m_age = 10;
    int m_score = 79;
};

#endif // TPERSON_H
