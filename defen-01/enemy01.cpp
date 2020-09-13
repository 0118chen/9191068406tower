#include "enemy_1.h"

enemy_1::enemy_1()(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = "";
    width = 90, height = 75;
    health = 700.0;
    orihealth = health;
}
