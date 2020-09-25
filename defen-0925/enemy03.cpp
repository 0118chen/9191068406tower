#include "enemy_3.h"

enemy_3::enemy_3()(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = ""; //enemy图片路径
    width = 126, height = 126;//enemy的宽高
    health = 3500.0;
    orihealth = health;  //记录初始生命值
}
