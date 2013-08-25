#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lenna.h"
#include "splashscreen.h"
#include "plugins/pluginsconfigdialog.h"
#include "aboutdialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    SplashScreen splash(this);
    splash.show();
    splash.setMessage("Starting " + QCoreApplication::applicationName());
    ui->setupUi(this);
    splash.setMessage("Loading config ...");
    this->setWindowTitle(Lenna::applicationName() + " " + Lenna::applicationVersion());
    splash.setMessage("Loading Plugins ...");
    splash.finish(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    Lenna::destroy();
    this->close();
}

void MainWindow::on_actionAbout_triggered()
{
    AboutDialog dialog;
    dialog.exec();
}

void MainWindow::on_actionPlugins_triggered()
{
    PluginsConfigDialog dialog;
    dialog.exec();
}
