#ifndef SQUARELABEL_H
#define SQUARELABEL_H

#include <QWidget>
#include <QLabel>
#include <QTabWidget>

class SquareLabel : public QLabel
{
    Q_OBJECT
public:
    explicit SquareLabel(QWidget *parent = 0);

    void resizeEvent(QResizeEvent *);
protected:

signals:
};


class TabWidget : public QTabWidget
{
    Q_OBJECT

public:
    explicit TabWidget(QWidget *parent = 0);

signals:

public slots:
};

class EditGameWidget : public QWidget
{
    Q_OBJECT
public:
    explicit EditGameWidget(QWidget *parent = 0);

protected:

private:

signals:

public slots:
};

#endif // SQUARELABEL_H
