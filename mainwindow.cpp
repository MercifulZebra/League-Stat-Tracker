#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"

#include "qpushbutton.h"

#include "loadgamewidget.h"
#include "mainmenuwidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init(){

    //Initialize Object Windows
    mainMenu_widget = new MainMenuWidget(this);
    loadGame_widget = new LoadGameWidget(this);

    //Initialize Stacked Widget Manager
    mainStack = new QStackedWidget(this);
    setCentralWidget(mainStack);

    //Add Windows to Stack
    mainStack->addWidget(mainMenu_widget);
    mainStack->addWidget(loadGame_widget);

    mainStack->setCurrentIndex(0);

    connectSignals();

}

void MainWindow::connectSignals(){


    //Connect Main Menu Buttons
    //    connect(mainMenu_widget->editGameButton, SIGNAL(clicked()), editGame_widget, SLOT());
    connect(mainMenu_widget->loadGameButton, SIGNAL(clicked()), loadGame_widget, SLOT(switchToLoadGame()));


    //Connect Stack Signals
    connect(loadGame_widget,SIGNAL(switchToMe(int)),mainStack, SLOT(setCurrentIndex(int)));
}

void MainWindow::switchToPage(int index){

}

