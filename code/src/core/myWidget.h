#ifndef MYWIDGET_H_
#define MYWIDGET_H_

#include <QLabel>

class MyWidget : public QWidget {
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private:
    QLabel *m_pLabelLoading;
};

#endif