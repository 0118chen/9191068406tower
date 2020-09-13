#include "enemy_1.h" 
Enemy_1::Enemy_1(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = ""; //怪物图片路径
    width = 90, height = 75;    //怪物宽高
    health = 700.0;
    orihealth = health; //记录开始的生命值
}
#ifndef ENEMY_1_H											//头文件 
#define ENEMY_1_H
#include "enemybaseclass.h"

//敌人1，继承敌人父类
class Enemy_1 : public EnemyBaseClass
{
public:
    Enemy_1(QVector<Coor>);
};

#endif // ENEMY_1_H





#include "enemy_2.h"
Enemy_2::Enemy_2(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = "";
    width = 78, height = 86;
    health = 920.0;
    orihealth = health; //记录开始的生命值
}
#ifndef ENEMY_2_H										//头文件 
#define ENEMY_2_H
#include "enemybaseclass.h"

//敌人2
class Enemy_2 : public EnemyBaseClass
{
public:
    Enemy_2(QVector<Coor>);
};

#endif // ENEMY_2_H



#include "enemy_3.h"
Enemy_3::Enemy_3(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = "";
    width = 126, height = 126;
    health = 3500.0;
    orihealth = health; //记录开始的生命值
}
#ifndef ENEMY_3_H											//头文件 
#define ENEMY_3_H
#include "enemybaseclass.h"

//敌人3
class Enemy_3 : public EnemyBaseClass
{
public:
    Enemy_3(QVector<Coor>);
};

#endif // ENEMY_3_H





#include "enemy_4.h"
Enemy_4::Enemy_4(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = "";
    width = 280, height = 132;
    health = 49500.0;
    orihealth = health; //记录开始的生命值
}
#ifndef ENEMY_4_H											//头文件 
#define ENEMY_4_H
#include "enemybaseclass.h"

//敌人4
class Enemy_4 : public EnemyBaseClass					
{
public:
    Enemy_4(QVector<Coor>);
};

#endif // ENEMY_4_H



// Coor是坐标结构（未写）， EnemyBaseClass是enemy的基类（未写） 

