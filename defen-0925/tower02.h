#ifndef TOWER02_H
#define TOWER02_H
#include"defenseclass.h"

class tower02:public defenseclass
{
public:
    tower02(const int,const int);//坐标
    void Attack(QVector<EnemyBaseClass*>&) override;
};

#endif // TOWER02_H
