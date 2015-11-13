#include "squarelabel.h"
#include "qdebug.h"
#include "qpainter.h"
#include "QResizeEvent"
SquareLabel::SquareLabel(QWidget *parent) : QLabel(parent)
{
    QSizePolicy p(sizePolicy());
    p.setHeightForWidth(true);
    setSizePolicy(p);

}

void SquareLabel::resizeEvent(QResizeEvent *event) {
    int nDimension = 0;
    if(event->size().height() < event->size().width()){
        nDimension = event->size().height();
    }
    else{
        nDimension = event->size().width();
    }
    setGeometry(QRect(11,11,nDimension,nDimension));
}
