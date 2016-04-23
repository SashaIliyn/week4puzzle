#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include <QDebug>
#include <QObject>
#include <QTimer>
#include "light.h"

class Traffic_Light : public QObject
{
    Q_OBJECT
public:
    Traffic_Light();

public slots:
    bool get_light_on(int index);
    void toggle_light(int index);
    void inc(){count++;}
    void reset(){count = 0;}
    int get(){return count;}
private:
    Light m_light[3];
    int count;
};
#endif // TRAFFIC_LIGHT_H
