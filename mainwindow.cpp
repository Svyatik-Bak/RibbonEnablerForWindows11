#include "mainwindow.h"
#include "about.h"
#include "ui_mainwindow.h"
#include <windows.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(size());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    system("taskkill /f /im explorer.exe & start explorer.exe");
}


void MainWindow::on_radioButton_clicked()
{
                QString string = NULL;
                HKEY key;
                if (RegCreateKeyEx(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Shell Extensions\\Blocked", 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &key, NULL) == ERROR_SUCCESS)
                if (RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Shell Extensions\\Blocked", 0, KEY_SET_VALUE | KEY_WOW64_64KEY, &key) == ERROR_SUCCESS)
                if (RegSetValueEx(key, L"{e2bf9676-5f8f-435c-97eb-11607a5bedf7}", 0, REG_SZ, (LPBYTE)&string, sizeof(REG_SZ)) == ERROR_SUCCESS)
                RegCloseKey(key);
}


void MainWindow::on_radioButton_2_clicked()
{
    HKEY key;
    if (RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Shell Extensions\\Blocked", 0, KEY_SET_VALUE | KEY_WOW64_64KEY, &key) == ERROR_SUCCESS)
    if (RegDeleteValue(key, L"{e2bf9676-5f8f-435c-97eb-11607a5bedf7}") == ERROR_SUCCESS)
    RegCloseKey(key);
}


void MainWindow::on_pushButton_2_clicked()
{
    about* form = new about (this);
    form->show();
}

