#ifndef SQUARELABEL_H
#define SQUARELABEL_H

#include <QWidget>
#include <QLabel>

class SquareLabel : public QLabel
{
    Q_OBJECT
    mutable int m_ctr;
public:
    explicit SquareLabel(QWidget *parent = 0);

    void resizeEvent(QResizeEvent *);
protected:
   // mutable int h4wCalls;

signals:

public slots:
};

#endif // SQUARELABEL_H
