#include "enemy_1.h"

enemy_1::enemy_1()(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = ""; //enemy图片路径
    width = 90, height = 75;//enemy的宽高
    health = 700.0;
    orihealth = health;  //记录初始生命值
}
