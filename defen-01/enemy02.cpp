#include "enemy_2.h"

enemy_2::enemy_2()(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = "";
    width = 78, height = 86;
    health = 920.0;
    orihealth = health;
}

