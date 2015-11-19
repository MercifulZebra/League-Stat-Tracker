#ifndef MAINMENUWIDGET_H
#define MAINMENUWIDGET_H

#include <QWidget>

class QPushButton;
class QLabel;

class QGridLayout;
class QHBoxLayout;
class QVBoxLayout;

class MainMenuWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainMenuWidget(QWidget *parent = 0);

    void init();
    void initLayout();

signals:

public slots:

public:

    QGridLayout *main_layout;
    QHBoxLayout *h_layout;
    QVBoxLayout *v_layout;

    QLabel      *mainTitle_label;
    QLabel      *mainDescr_label;

    QPushButton *editGameButton; //   Add/Edit Game Button
    QPushButton *loadGameButton; //   Load Game Button

};

#endif // MAINMENUWIDGET_H
