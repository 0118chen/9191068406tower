#include "enemy_1.h" 
Enemy_1::Enemy_1(QVector<Coor> path) : EnemyBaseClass(path)
{
    picturePath = ""; //����ͼƬ·��
    width = 90, height = 75;    //������
    health = 700.0;
    orihealth = health; //��¼��ʼ������ֵ
}
#ifndef ENEMY_1_H											//ͷ�ļ� 
#define ENEMY_1_H
#include "enemybaseclass.h"

//����1���̳е��˸���
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
    orihealth = health; //��¼��ʼ������ֵ
}
#ifndef ENEMY_2_H										//ͷ�ļ� 
#define ENEMY_2_H
#include "enemybaseclass.h"

//����2
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
    orihealth = health; //��¼��ʼ������ֵ
}
#ifndef ENEMY_3_H											//ͷ�ļ� 
#define ENEMY_3_H
#include "enemybaseclass.h"

//����3
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
    orihealth = health; //��¼��ʼ������ֵ
}
#ifndef ENEMY_4_H											//ͷ�ļ� 
#define ENEMY_4_H
#include "enemybaseclass.h"

//����4
class Enemy_4 : public EnemyBaseClass					
{
public:
    Enemy_4(QVector<Coor>);
};

#endif // ENEMY_4_H



// Coor������ṹ��δд���� EnemyBaseClass��enemy�Ļ��ࣨδд�� 

