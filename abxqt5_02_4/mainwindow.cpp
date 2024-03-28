#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

void MainWindow::iniUI()
{
    fLabCurFile = new QLabel;
    fLabCurFile->setMidLineWidth(150);
    fLabCurFile->setText("当前文件：");
    ui->statusbar->addWidget(fLabCurFile);

    progressBar = new QProgressBar;
    progressBar->setMinimum(5);
    progressBar->setMaximum(50);
    progressBar->setValue(ui->textEdit->font().pointSize());
    ui->statusbar->addWidget(progressBar);

    spinFontSize = new QSpinBox;
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    ui->toolBar->addWidget(new QLabel("字体大小"));
    ui->toolBar->addWidget(spinFontSize);

    comboFont = new QFontComboBox;
    ui->toolBar->addWidget(new QLabel("字体"));
    ui->toolBar->addWidget(comboFont);
    setCentralWidget(ui->textEdit);
}

void MainWindow::iniSignalSlots()
{
    connect(spinFontSize, SIGNAL(valueChanged(int)), this, SLOT(on_spinBoxFontSize_valueChanged(int)));
    //connect(comboFont, SIGNAL(currentIndexChanged(const QString&)), this, SLOT(on_comboFont_currentIndexChanged(const QString&)));
    connect(comboFont, SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboFont_currentIndexChanged(int)));
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    iniUI();
    iniSignalSlots();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actFontBold_triggered(bool checked)
{
    QTextCharFormat fmt;
    if(checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}


void MainWindow::on_textEdit_copyAvailable(bool b)
{
    ui->actCut->setEnabled(b);
    ui->actCopy->setEnabled(b);
    ui->actPaste->setEnabled(ui->textEdit->canPaste());
}


void MainWindow::on_textEdit_selectionChanged()
{
    QTextCharFormat fmt;
    fmt=ui->textEdit->currentCharFormat();
    ui->actFontItalic->setChecked(fmt.fontItalic());
    ui->actFontBold->setChecked(fmt.font().bold());
    ui->actFontUnderline->setChecked(fmt.fontUnderline());
}

void MainWindow::on_spinBoxFontSize_valueChanged(int aFontSize)
{
    QTextCharFormat fmt;
    fmt.setFontPointSize(aFontSize);
    ui->textEdit->mergeCurrentCharFormat(fmt);
    progressBar->setValue(aFontSize);
}

//void MainWindow::on_comboFont_currentIndexChanged(const QString &arg1)
//{
//    QTextCharFormat fmt;
//    fmt.setFontFamily(arg1);
//    ui->textEdit->mergeCurrentCharFormat(fmt);
//    qDebug() << "Function called with arg1:" << arg1;
//}


void MainWindow::on_comboFont_currentIndexChanged(int index)
{
    QString fontName = comboFont->itemText(index);
    QTextCharFormat fmt;
    fmt.setFontFamily(fontName);
    ui->textEdit->mergeCurrentCharFormat(fmt);
    qDebug() << "Function called with fontName:" << fontName;
}


