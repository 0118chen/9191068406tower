#ifndef COOR_H
#define COOR_H
//多文件使用的全局函数及结构

#include<QString>
#include<QVector>

constexpr int map = 80;             //地图块边长
constexpr int half = map >> 1;          //地图块边长的一半

//坐标结构
struct Coor
{
    int x , y;

    Coor(const int x = 0,const int y = 0): x(x) , y(y){}
};

//坐标和图片路径结构

struct pic: public Coor
{
    QString picturePath;        //图片路径

    pic() {}

    pic (const int x, const int y, const QString path="") : Coor(x,y),picturePath(path){}
};

//击中敌人
struct Hit: public Coor
{
    int width, height;          //enemy的高度和宽度

    Hit (int x, int y, int width, int height): Coor(x,y), width(width), height(height){}
};
#endif
