#ifndef DEFENSECLASS_H
#define DEFENSECLASS_H
#include "enemybaseclass.h"
#define DistBetPoints(X1, Y1, X2, Y2)
abs(sqrt((((X1) - (X2)) * ((X1) - (X2))) + (((Y1) - (Y2)) * ((Y1) - (Y2)))))
//求两点之间的距离
extern QVector<HitEffect*> hitEffectVec;
class defenseclass: protected pic
{
protected:
    int CoorX,CoorY;//在游戏页面的二维坐标
    int hi,wi;//防御塔的实际大小
    int leth;//防御塔的射程
    int cost;//一个防御塔所花金币
    int attackpower;//攻击力
    double angle=0.0;//当防御塔遇到敌人时炮口旋转角度
    EnemyBaseClass* targetEnemy = nullptr;  //目标敌人

    //结构体子弹
    struct BulletStr : public Coor
    {
        double k=0.0,b=0.0;
        bool dirFlag = false;
        int attribute;
        BulletStr(int x, int y, int attribute = 0) : Coor(x, y), attribute(attribute) {}
        //子弹
    };


    QVector<BulletStr*> BulletVec;  //子弹数组

    int attackInterval;//攻击间隔

    int upgradeValue = 300;//防御塔升级成本

    int counter = 2;//计数器

public:
    defenseclass(const int, const int);   //构造

    virtual void Attack(QVector<EnemyBaseClass*>&) = 0;      //攻击函数，参数为敌人对象向量

    Coor getCoor() const;           //返回防御塔真实坐标 *
    QString getPicturePath() const; //返回防御塔图片路径
    int getwi() const;           //返回防御塔宽高   *
    int gethi() const;
    double getangle() const;        //返回防御塔角度
    int getleth() const;           //返回防御塔攻击范围 *
    EnemyBaseClass* getTargetEnemy() const;   //返回目标敌人 *
    QVector<Coor> getAttackCoor() const;      //返回攻击坐标
    int getattackPower() const;     //返回防御塔攻击力  *
    int getcost() const;           //返回防御塔价值   *
    int getAttackInterval() const;  //返回攻击间隔 *
    Coor getDisCoor() const;        //返回显示坐标 *
    int getUpgradeValue() const;    //返回升级成本 *

    void setCoor(const int, const int);         //设置防御塔坐标
    void setwiandhi(const int, const int);  //设置防御塔宽高   *
    void setangle(const double);                //设置防御塔旋转角度
    void setTargetEnemyNull();                  //设置目标敌人为空  *
    void setAttackInterval(const int);          //设置攻击间隔    *
    void setcost(const int);                   //设置防御塔价值   *
    void setattackPower(const int);             //设置防御塔攻击力  *
    void setDisCoor(const int, const int);      //设置显示坐标    *
    void setleth(const int);                   //设置防御塔攻击范围 *

};

#endif // DEFENSECLASS_H
