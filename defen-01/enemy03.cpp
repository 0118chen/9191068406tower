#include "enemy_3.h"

enemy_3::enemy_3()(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = "";
    width = 126, height = 126;
    health = 3500.0;
    orihealth = health;
}
