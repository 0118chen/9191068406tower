#include "defenseclass.h"
defenseclass::defenseclass(const int x , const int y): pic(x,y)
{
    CoorX=x,CoorY=y;
}
QString defenseclass::getCoor()const
{
    return Coor(x,y);
}
int  defenseclass::getwi()const
{
    return wi;
}
int defenseclass::gethi()const
{
    return hi;
}
int defenseclass::getcost()const
{
    return cost;
}
int defenseclass::getleth()const
{
    return leth;
}
EnemyBaseClass* defenseclass::getTargetEnemy() const      //返回目标敌人
{
    return targetEnemy;
}
int defenseclass::getangle()const
{
    return angle;
}
int defenseclass::getattackPower()const
{
    return attackpower;
}
int defenseclass::getAttackInterval() const  //返回攻击间隔
{
    return attackInterval;
}
void defenseclass::setCoor(const int x,const int y)//设置防御塔坐标
{
    this->x= x,this->y= y;
}
void defenseclass::setwiandhi(const int wi, const int hi)//设置防御塔宽高
{
    this->wi= wi,this->hi=hi;
}
void defenseclass::setangle(const double angle)//设置防御塔旋转角度
{
    this->angle=angle;
}
void defenseclass::setTargetEnemyNull()//设置目标敌人为空
{
    targetEnemy=nullptr;
}
void defenseclass::setAttackInterval(const int x)//设置攻击间隔
{
    attackInterval=x;
}
void defenseclass::setcost(const int x)//设置防御塔价值
{
    cost=x;
}
void defenseclass::setattackPower(const int x)//设置防御塔攻击力
{
    attackpower=x;
}
void defenseclass::setCoor(const int x, const int y)//设置显示坐标
{
    CoorX=x,CoorY=y;
}
void defenseclass::setleth(const int x)//设置防御塔攻击范围
{
    leth=x;
}






























