#ifndef TFORMDOC_H
#define TFORMDOC_H

#include <QWidget>

namespace Ui {
class TFormDoc;
}

class TFormDoc : public QWidget
{
    Q_OBJECT

public:
    explicit TFormDoc(QWidget *parent = nullptr);
    ~TFormDoc();

    void loadFormFile(QString &aFileName);
    QString currentFileName();
    bool isFileOpened();
    void saveToFile();

    void setEditFont();
    void textCut();
    void textCopy();
    void textPaste();


private:
    Ui::TFormDoc *ui;
    QString m_fileName;
    bool m_fileOpened = false;
};

#endif // TFORMDOC_H
