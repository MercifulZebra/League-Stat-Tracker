#include "mainmenuwidget.h"

#include "qpushbutton.h"
#include "qlabel.h"
#include "qfont.h"

#include "qgridlayout.h"
#include "qboxlayout.h"



MainMenuWidget::MainMenuWidget(QWidget *parent) : QWidget(parent),
    editGameButton(NULL),
    loadGameButton(NULL)
{
    init();
}

void MainMenuWidget::init(){

    //Initialize Buttons
    editGameButton = new QPushButton(this);
    loadGameButton = new QPushButton(this);

    mainTitle_label = new QLabel("League Stat Tracker",this);
    mainDescr_label = new QLabel("... description .. ", this);

    QFont largeFont("Arial",16);
    QFont standardFont("Arial", 12);
    QFont secondaryFont("Arial", 10);

    //Set up Button Text
    editGameButton->setText("Add / Edit Game");
    editGameButton->setFont(standardFont);

    loadGameButton->setText("Load Game");
    loadGameButton->setFont(standardFont);

    //Set up label text
    mainTitle_label->setFont(largeFont);
    mainDescr_label->setFont(secondaryFont);

    initLayout();
}


void MainMenuWidget::initLayout(){

    //main_layout = new QGridLayout(this);
    //setLayout(main_layout);

    h_layout = new QHBoxLayout(this);
    v_layout = new QVBoxLayout();


    setLayout(h_layout);
    QSpacerItem *hitem = new QSpacerItem(1,1,QSizePolicy::Expanding,QSizePolicy::Fixed);
    QSpacerItem *hitem_2 = new QSpacerItem(1,1,QSizePolicy::Expanding,QSizePolicy::Fixed);

    h_layout->addSpacerItem(hitem);
    h_layout->addLayout(v_layout);
    h_layout->addSpacerItem(hitem_2);

    QSpacerItem *vitem = new QSpacerItem(1,1,QSizePolicy::Fixed, QSizePolicy::Expanding);
    QSpacerItem *vitem_2 = new QSpacerItem(1,1,QSizePolicy::Fixed, QSizePolicy::Expanding);
    QSpacerItem *vitem_3 = new QSpacerItem(1,1,QSizePolicy::Fixed, QSizePolicy::Expanding);

    v_layout->addSpacerItem(vitem);
    v_layout->addWidget(mainTitle_label);
    mainTitle_label->setAlignment(Qt::AlignCenter);
    v_layout->addWidget(mainDescr_label);
    mainDescr_label->setAlignment(Qt::AlignCenter);
    v_layout->addSpacerItem(vitem_2);
    v_layout->addWidget(editGameButton);
    v_layout->addWidget(loadGameButton);
    v_layout->addSpacerItem(vitem_3);

}
