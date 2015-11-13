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
    QPixmap p;
    p.load(":/new/TestImages/TestImages/LeagueMap.jpg");

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    setPixmap(p.scaled(event->size().width(),event->size().height(),Qt::KeepAspectRatio));


}
/*
//    int nDimension = 0;
//    if(event->size().height() < event->size().width()){
//        nDimension = event->size().height();
//    }
//    else{
//        nDimension = event->size().width();
//    }

//    setGeometry(QRect(11,11,nDimension,nDimension));
//    setFixedSize(nDimension,nDimension);

//    emit adjustedSize(nDimension,nDimension);
*/

TabWidget::TabWidget(QWidget *parent) : QTabWidget(parent)
{

}
/*
//void TabWidget::resizeEvent(QResizeEvent *) {

//}

//void TabWidget::adjustForMap(int labelWidth, int labelHeight){

//    int fillWidth = parentWidget()->width() - 33 - labelWidth;

//    setGeometry(QRect(labelWidth + 22,11,fillWidth,labelHeight));
//    qDebug()<<"Parent Width : "<<parentWidget()->width()<<" LabelWidth: "<<labelWidth<<" Tab Width: "<<width()<<" Sum: "<<fillWidth + width() + 33;

//}
*/

EditGameWidget::EditGameWidget(QWidget *parent) : QWidget(parent){

}
