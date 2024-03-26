#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QTemporaryDir>
#include <QTemporaryFile>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_11_clicked()
{
    QString curDir = QCoreApplication::applicationDirPath();
    QString aFile = QFileDialog::getOpenFileName(this, "打开一个文件", curDir, "所有文件(*.*)");
    ui->editFile->setText(aFile);
}


void Dialog::on_pushButton_12_clicked()
{
    QString curDir = QCoreApplication::applicationDirPath();
    QString aDir = QFileDialog::getExistingDirectory(this, "选择一个目录", curDir);
    ui->editDir->setText(aDir);
}


void Dialog::on_pushButton_13_clicked()
{
    ui->plainTextEdit->clear();
}


void Dialog::on_pushButton_clicked()
{
    showBtnInfo(sender());
    QString str = QCoreApplication::applicationDirPath();
    ui->plainTextEdit->appendPlainText(str);
}

void Dialog::showBtnInfo(QObject *btn)
{
    QPushButton *theBtn =  static_cast<QPushButton*>(btn);
    ui->plainTextEdit->appendPlainText(theBtn->text());
    ui->plainTextEdit->appendPlainText(theBtn->toolTip()+":\n");
}


void Dialog::on_pushButton_2_clicked()
{
    showBtnInfo(sender());
    QString str = QCoreApplication::applicationFilePath();
    ui->plainTextEdit->appendPlainText(str);
}


void Dialog::on_pushButton_3_clicked()
{
    showBtnInfo(sender());
    //QCoreApplication::setApplicationName("MyApp");
    QString str = QCoreApplication::applicationName();
    ui->plainTextEdit->appendPlainText(str);
}


void Dialog::on_pushButton_4_clicked()
{
    showBtnInfo(sender());
    QCoreApplication::setApplicationName("MyApp");
    QString str = QCoreApplication::applicationName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_5_clicked()
{
    showBtnInfo(sender());
    QStringList strList = QCoreApplication::libraryPaths();
    for(auto &item:strList)
        ui->plainTextEdit->appendPlainText(item);
    ui->plainTextEdit->appendPlainText("");
}


void Dialog::on_pushButton_6_clicked()
{
    showBtnInfo(sender());
    QCoreApplication::setOrganizationName("LKP");
    QString str = QCoreApplication::organizationName();
    ui->plainTextEdit->appendPlainText(str);
}


void Dialog::on_pushButton_7_clicked()
{
    QCoreApplication::exit();
}


void Dialog::on_pushButton_14_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString newFile = fileInfo.path()+"/"+fileInfo.baseName() + "--副本." + fileInfo.suffix();
    QFile::copy(sous, newFile);
    ui->plainTextEdit->appendPlainText("源文件:" + sous);
    ui->plainTextEdit->appendPlainText("副本: " + newFile + "\n");
}


void Dialog::on_pushButton_19_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString newFile = fileInfo.path()+"/"+fileInfo.baseName() + "--副本." + fileInfo.suffix();
    QFile file(sous);
    file.copy(newFile);
    ui->plainTextEdit->appendPlainText("源文件:" + sous);
    ui->plainTextEdit->appendPlainText("副本: " + newFile + "\n");
}


void Dialog::on_pushButton_15_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    bool the = QFile::exists(sous);
    ui->plainTextEdit->appendPlainText(sous);
    if(the)
        ui->plainTextEdit->appendPlainText("存在\n");
    else
        ui->plainTextEdit->appendPlainText("不存在\n");
}


void Dialog::on_pushButton_20_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFile file(sous);
    bool the = file.exists();
    ui->plainTextEdit->appendPlainText(sous);
    if(the)
        ui->plainTextEdit->appendPlainText("存在\n");
    else
        ui->plainTextEdit->appendPlainText("不存在\n");
}


void Dialog::on_pushButton_16_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    if(QFileInfo::exists(sous))
    {
        QFile::remove(sous);
        ui->plainTextEdit->appendPlainText("删除文件：" + sous + "\n");
    }
    else
        ui->plainTextEdit->appendPlainText("文件不存在\n");
}


void Dialog::on_pushButton_21_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFile file(sous);
    if(file.exists())
    {
        file.remove();
        ui->plainTextEdit->appendPlainText("删除文件：" + sous + "\n");
    }
    else
        ui->plainTextEdit->appendPlainText("文件不存在\n");
}


void Dialog::on_pushButton_17_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString newFile = fileInfo.path()+"/"+fileInfo.baseName() + "--修改后的版本." + fileInfo.suffix();
    QFile::rename(sous, newFile);
    ui->plainTextEdit->appendPlainText("源文件:" + sous);
    ui->plainTextEdit->appendPlainText("修改后: " + newFile + "\n");
}


void Dialog::on_pushButton_22_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFile file(sous);
    QFileInfo fileInfo(sous);
    QString newFile = fileInfo.path()+"/"+fileInfo.baseName() + "--修改后的版本." + fileInfo.suffix();
    file.rename(newFile);
    ui->plainTextEdit->appendPlainText("源文件:" + sous);
    ui->plainTextEdit->appendPlainText("修改后: " + newFile + "\n");
}


void Dialog::on_pushButton_18_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    if(QFileInfo::exists(sous))
    {
        QFile::moveToTrash(sous);
        ui->plainTextEdit->appendPlainText("删除文件：" + sous + "\n");
    }
    else
        ui->plainTextEdit->appendPlainText("文件不存在\n");
}


void Dialog::on_pushButton_23_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFile file(sous);
    if(QFileInfo::exists(sous))
    {
        file.moveToTrash();
        ui->plainTextEdit->appendPlainText("删除文件：" + sous + "\n");
    }
    else
        ui->plainTextEdit->appendPlainText("文件不存在\n");
}


void Dialog::on_pushButton_24_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = fileInfo.absoluteFilePath();
    ui->plainTextEdit->appendPlainText(str + "\n");

}


void Dialog::on_pushButton_25_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = fileInfo.absolutePath();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_26_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = fileInfo.fileName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_27_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = fileInfo.filePath();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_28_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = QString::number(fileInfo.size()) + " Bytes";
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_29_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = fileInfo.path();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_40_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = fileInfo.baseName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_41_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = fileInfo.completeBaseName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_30_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = fileInfo.suffix();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_31_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    QString str = fileInfo.completeSuffix();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_32_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editDir->text();
    QFileInfo fileInfo(sous);
    bool the = fileInfo.isDir();
    if(the)
        ui->plainTextEdit->appendPlainText("是目录");
    else
        ui->plainTextEdit->appendPlainText("不是目录");
}


void Dialog::on_pushButton_33_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    bool the = fileInfo.isFile();
    if(the)
        ui->plainTextEdit->appendPlainText("是文件");
    else
        ui->plainTextEdit->appendPlainText("不是文件");
}


void Dialog::on_pushButton_34_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    bool the = fileInfo.isExecutable();
    if(the)
        ui->plainTextEdit->appendPlainText("是exe");
    else
        ui->plainTextEdit->appendPlainText("不是exe");
}


void Dialog::on_pushButton_35_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    ui->plainTextEdit->appendPlainText(fileInfo.birthTime().toString("yyyy-MM-dd hh:mm:ss"));
    ui->plainTextEdit->appendPlainText("");
}


void Dialog::on_pushButton_36_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    ui->plainTextEdit->appendPlainText(fileInfo.lastModified().toString("yyyy-MM-dd hh:mm:ss"));
    ui->plainTextEdit->appendPlainText("");
}


void Dialog::on_pushButton_37_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    ui->plainTextEdit->appendPlainText(fileInfo.lastRead().toString("yyyy-MM-dd hh:mm:ss"));
    ui->plainTextEdit->appendPlainText("");
}


void Dialog::on_pushButton_38_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    bool the = QFileInfo::exists(sous);
    if(the)
        ui->plainTextEdit->appendPlainText("是");
    else
        ui->plainTextEdit->appendPlainText("不是");
}


void Dialog::on_pushButton_39_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editFile->text();
    QFileInfo fileInfo(sous);
    bool the = fileInfo.exists();
    if(the)
        ui->plainTextEdit->appendPlainText("是");
    else
        ui->plainTextEdit->appendPlainText("不是");
}


void Dialog::on_pushButton_42_clicked()
{
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText(QDir::tempPath()+"\n");

}


void Dialog::on_pushButton_43_clicked()
{
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText(QDir::rootPath()+"\n");
}


void Dialog::on_pushButton_44_clicked()
{
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText(QDir::homePath()+"\n");
}


void Dialog::on_pushButton_45_clicked()
{
    showBtnInfo(sender());
    for(auto &item : QDir::drives())
        ui->plainTextEdit->appendPlainText(item.path());

    ui->plainTextEdit->appendPlainText("");
}


void Dialog::on_pushButton_46_clicked()
{
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText(QDir::currentPath()+"\n");
}


void Dialog::on_pushButton_47_clicked()
{
    showBtnInfo(sender());
    QDir::setCurrent(ui->editDir->text());
    ui->plainTextEdit->appendPlainText(QDir::currentPath()+"\n");
}


void Dialog::on_pushButton_48_clicked()
{
    showBtnInfo(sender());
    QString subDir = "subdir1";
    QDir dir(ui->editDir->text());
    bool ok = dir.mkdir(subDir);
    if(ok)
        ui->plainTextEdit->appendPlainText("所选目录下成功新建一个目录 " + subDir + "\n");
    else
        ui->plainTextEdit->appendPlainText("创建目录失败\n");
}


void Dialog::on_pushButton_49_clicked()
{
    showBtnInfo(sender());
    QString sous = ui->editDir->text();
    QDir dir(sous);
    //QString sous(ui->editFile->text());
    bool ok = dir.rmdir(sous);
    if(ok)
        ui->plainTextEdit->appendPlainText("成功删除所选目录 " + sous + "\n");
    else
        ui->plainTextEdit->appendPlainText("删除失败\n");
}


void Dialog::on_pushButton_50_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QString sous(ui->editFile->text());
    bool ok = dir.remove(sous);
    if(ok)
        ui->plainTextEdit->appendPlainText("删除文件:" + sous + "\n");
    else
        ui->plainTextEdit->appendPlainText("删除文件失败\n");
}


void Dialog::on_pushButton_51_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QString sous(ui->editFile->text());//源文件
    QFileInfo fileInfo(sous);//
    QString newFile = fileInfo.path() + "/" +fileInfo.baseName()+".XYZ";
    dir.rename(sous, newFile);
    ui->plainTextEdit->appendPlainText(fileInfo.lastRead().toString("yyyy-MM-dd hh:mm:ss"));
    ui->plainTextEdit->appendPlainText("");
}


void Dialog::on_pushButton_52_clicked()
{
    showBtnInfo(sender());
    QString curDir = QDir::currentPath();
    QDir lastDir(curDir);
    ui->plainTextEdit->appendPlainText("选择目录之前: " + lastDir.absolutePath());
    QString aDir = QFileDialog::getExistingDirectory(this, "选择一个目录", curDir, QFileDialog::ShowDirsOnly);
    if(aDir.isEmpty())
        return;
    ui->editDir->setText(aDir);
    lastDir.setPath(aDir);
    ui->plainTextEdit->appendPlainText("选择目录之后:" + lastDir.absolutePath() + "\n");
}


void Dialog::on_pushButton_53_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    bool ok = dir.removeRecursively();
    if(ok)
        ui->plainTextEdit->appendPlainText("删除目录及文件成功\n");
    else
        ui->plainTextEdit->appendPlainText("删除目录及文件失败\n");
}


void Dialog::on_pushButton_54_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());//操作的目录
    QString str = dir.absoluteFilePath(ui->editFile->text());
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_55_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());//绝对路径
    QString str = dir.absolutePath();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_56_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());//绝对路径
    QString str = dir.canonicalPath();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_57_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QString str = dir.filePath(ui->editDir->text());
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_58_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");
}


void Dialog::on_pushButton_59_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QString str = dir.dirName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_60_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    bool the = dir.exists();
    if(the)
        ui->plainTextEdit->appendPlainText("true\n");
    else
        ui->plainTextEdit->appendPlainText("false\n");
}


void Dialog::on_pushButton_61_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    bool the = dir.isEmpty();
    if(the)
        ui->plainTextEdit->appendPlainText("true\n");
    else
        ui->plainTextEdit->appendPlainText("false\n");
}


void Dialog::on_pushButton_62_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QStringList strList = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);

    ui->plainTextEdit->appendPlainText("所选目录下的所有目录:");
    for(auto item : strList)
        ui->plainTextEdit->appendPlainText(item);
    ui->plainTextEdit->appendPlainText("\n");
}


void Dialog::on_pushButton_63_clicked()
{
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QStringList strList = dir.entryList(QDir::Files);

    ui->plainTextEdit->appendPlainText("所选目录下的所有目录:");
    for(auto item : strList)
        ui->plainTextEdit->appendPlainText(item);
    ui->plainTextEdit->appendPlainText("\n");
}


void Dialog::on_pushButton_8_clicked()
{
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("QDir::tempPath()=" +QDir::tempPath());

    QTemporaryDir dir;
    dir.setAutoRemove(true);
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");
}


void Dialog::on_pushButton_64_clicked()
{
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("QDir::tempPath()=" +QDir::tempPath());

    QTemporaryFile aFile;
    aFile.setAutoRemove(true);
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName() + "\n");
    aFile.close();
}


void Dialog::on_pushButton_9_clicked()
{
    showBtnInfo(sender());
    QString specDir = ui->editDir->text();
    ui->plainTextEdit->appendPlainText("指定的目录=" + specDir);
    QTemporaryDir dir(specDir + "/TempDir _xxxxxx");
    dir.setAutoRemove(false);
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");
}


void Dialog::on_pushButton_65_clicked()
{
    showBtnInfo(sender());
    QString specDir = ui->editDir->text();
    ui->plainTextEdit->appendPlainText("指定的目录=" + specDir);
    QTemporaryFile aFile(specDir + "/TempFile_xxxxxx.temp");
    aFile.setAutoRemove(false);
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName() + "\n");
    aFile.close();
}


void Dialog::on_pushButton_10_clicked()
{
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("当前路径=" + QDir::currentPath());
    QTemporaryDir dir("SubDir _xxxxxx");//相对路径
    dir.setAutoRemove(false);
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");
}

void Dialog::on_pushButton_66_clicked()
{
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("当前路径=" + QDir::currentPath());

    QTemporaryFile aFile("CurTemFile_xxxxxx.temp");
    aFile.setAutoRemove(false);
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName() + "\n");
    aFile.close();
}

void Dialog::on_pushButton_67_clicked()
{
    showBtnInfo(sender());

    fileWather.addPath((ui->editDir->text()));
    fileWather.addPath(ui->editFile->text());

    connect(&fileWather, &QFileSystemWatcher::directoryChanged,
            this, &Dialog::do_directoryChanged);
    connect(&fileWather, &QFileSystemWatcher::fileChanged,
            this, &Dialog::do_fileChanged);
}

void Dialog::do_directoryChanged(const QString &path)
{
    ui->plainTextEdit->appendPlainText(path + "目录发生了变换\n");
}

void Dialog::do_fileChanged(const QString &path)
{
    ui->plainTextEdit->appendPlainText(path + "文件发生了变换\n");
}


void Dialog::on_pushButton_68_clicked()
{
    showBtnInfo(sender());

    fileWather.removePath((ui->editDir->text()));
    fileWather.removePath(ui->editFile->text());

    disconnect(&fileWather);
}


void Dialog::on_pushButton_69_clicked()
{
    showBtnInfo(sender());
    for(auto &item : fileWather.directories())
        ui->plainTextEdit->appendPlainText(item);
    ui->plainTextEdit->appendPlainText("");
}


void Dialog::on_pushButton_70_clicked()
{
    showBtnInfo(sender());
    for(auto &item : fileWather.files())
        ui->plainTextEdit->appendPlainText(item);
    ui->plainTextEdit->appendPlainText("");
}

