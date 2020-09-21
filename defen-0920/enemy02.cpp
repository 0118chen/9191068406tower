#include "enemy_2.h"

enemy_2::enemy_2()(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = ""; //enemy图片路径
    width = 78 ,height = 86;//enemy的宽高
    health = 920.0;
    orihealth = health;  //记录初始生命值
}
