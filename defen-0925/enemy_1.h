#ifndef ENEMY_1_H
#define ENEMY_1_H
#include "enemybaseclass.h"//继承父类enemy

class enemy_1: public EnemyBaseClass
{
public:
    enemy_1(QVector<Coor>);
};

#endif // ENEMY_1_H
