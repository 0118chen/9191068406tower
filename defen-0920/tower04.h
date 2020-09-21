#ifndef TOWER04_H
#define TOWER04_H
#include"defenseclass.h"

class tower04:public defenseclass
{
public:
    tower04(const int, const int);
    void Attack(QVector<EnemyBaseClass*>&) override;
};

#endif // TOWER04_H
