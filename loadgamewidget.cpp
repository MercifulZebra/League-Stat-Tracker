#include "loadgamewidget.h"
#include "internaltypes.h"

LoadGameWidget::LoadGameWidget(QWidget *parent) : QWidget(parent)
{

}

void LoadGameWidget::switchToLoadGame(){
    //Handle Switch

    //Tell MainWindow to show me
    emit switchToMe((int)(pageIndex::LOADGAME));
}
