#ifndef TOWER03_H
#define TOWER03_H
#include"defenseclass.h"

class tower03 : public defenseclass
{
public:
    tower03(const int , const int );//坐标
    void Attack(QVector<EnemyBaseClass*>&) override;
};

#endif // TOWER03_H
