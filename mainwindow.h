#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class LoadGameWidget;
class MainMenuWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void init();

    void connectSignals();

public slots:
    void switchToPage(int index);

private:
    Ui::MainWindow *ui;
    QStackedWidget *mainStack;
    MainMenuWidget *mainMenu_widget;
    //Add Game Widget
    //Edit Game Widget
    LoadGameWidget *loadGame_widget;//Load Game Widget
    //Review Game Widget

};

#endif // MAINWINDOW_H
