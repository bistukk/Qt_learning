#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QActionGroup>
#include <QSpinBox>
#include <QFontComboBox>
#include <QLabel>
#include <QProgressBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //解决英文界面，中文界面互斥
    ui->setupUi(this);
    QActionGroup *actionGroup = new QActionGroup(this);
    actionGroup->addAction(ui->actLang_CN);
    actionGroup->addAction(ui->actLang_EN);
    actionGroup->setExclusive(true);

    //创建一些无法通过可视化UI直接设计的组件
    QSpinBox *spinFontSize = new QSpinBox(this);
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->textEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->toolBar->addWidget(spinFontSize);

    QFontComboBox *comboFontBox = new QFontComboBox(this);
    comboFontBox->setMinimumWidth(150);
    comboFontBox->setFont(ui->textEdit->font());
    ui->toolBar->addWidget(comboFontBox);

    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actClose);

    //status bar
    labFile = new QLabel(this);
    labFile->setMinimumWidth(150);
    labFile->setText("文件名：");
    ui->statusbar->addWidget(labFile);
    progressbar = new QProgressBar(this);
    progressbar->setMinimum(5);
    progressbar->setMaximum(50);
    progressbar->setValue(ui->textEdit->font().pointSize());
    ui->statusbar->addWidget(progressbar);
    labInfo = new QLabel("Permanent");
    ui->statusbar->addPermanentWidget(labInfo);

    connect(spinFontSize, &QSpinBox::valueChanged, this, &MainWindow::on_fontSize_changeed);
    connect(comboFontBox, &QFontComboBox::currentFontChanged, this, &MainWindow::on_font_changed);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actFile_New_triggered()
{
    ui->textEdit->clear();
    ui->textEdit->document()->setModified(false);
    labFile->setText("文件名：新建的一个文件");
}


void MainWindow::on_actFile_Open_triggered()
{
    labFile->setText("正在打开一个文件");
}


void MainWindow::on_actFile_Save_triggered()
{
    ui->textEdit->document()->setModified(false);
    labFile->setText("文件已保存");

}


void MainWindow::on_textEdit_copyAvailable(bool b)
{
    ui->actEdit_Copy->setEnabled(b);
    ui->actEdit_Cut->setEnabled(b);
    ui->actEdit_Paste->setEnabled(ui->textEdit->canPaste());
}


void MainWindow::on_textEdit_selectionChanged()
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    ui->actFont_Bold->setChecked(fmt.font().bold());
    ui->actFont_Italic->setChecked(fmt.font().italic());
    ui->actFont_UnderLine->setChecked(fmt.font().underline());
}


void MainWindow::on_actFont_Bold_triggered(bool checked)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    if(checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->textEdit->setCurrentCharFormat(fmt);

}


void MainWindow::on_actFont_Italic_triggered(bool checked)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->textEdit->setCurrentCharFormat(fmt);
}


void MainWindow::on_actFont_UnderLine_triggered(bool checked)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->textEdit->setCurrentCharFormat(fmt);
}

void MainWindow::on_fontSize_changeed(int fontSize)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    fmt.setFontPointSize(fontSize);
    ui->textEdit->setCurrentCharFormat(fmt);
    progressbar->setValue(fontSize);
}

void MainWindow::on_font_changed(const QFont &font)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    fmt.setFont(font);
    ui->textEdit->setCurrentCharFormat(fmt);
    labInfo->setText("字体名称：" + font.family());
}

