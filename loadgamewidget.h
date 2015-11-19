#ifndef LOADGAMEWIDGET_H
#define LOADGAMEWIDGET_H

#include <QWidget>

class LoadGameWidget : public QWidget
{
    Q_OBJECT
public:
    explicit LoadGameWidget(QWidget *parent = 0);

signals:
    void switchToMe(int index);

public slots:
    void switchToLoadGame();
};

#endif // LOADGAMEWIDGET_H
