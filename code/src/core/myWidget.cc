#include "myWidget.h"
#include "common/common.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(500, 400);

    m_pLabelLoading = new QLabel(this);
    m_pLabelLoading->setObjectName("m_pLabelLoading");
    m_pLabelLoading->setGeometry(200, 150, 100, 100);

    Common::readQssFile(":/qss/myWidget.qss", this);
}

MyWidget::~MyWidget()
{
}