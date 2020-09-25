#ifndef SELECTION_H
#define SELECTION_H
#include "coor.h"

class selection : private pic
{
private:
    //选择框边长
    static constexpr unsigned int seleSideLength = 180;
    //子按钮边长
    static constexpr unsigned int childButLength = 70;

    bool display = false;       //选择框显示状态

    //选择框子按钮数组
    pic childButtonArr[4];

    //防御塔图片路径数组
    const QString towerPicturePathArr[4] =
    {"../PictureMaterial/cannon_1.png", "../PictureMaterial/cannon_2.png",
    "../PictureMaterial/cannon_3.png", "../PictureMaterial/cannon_4.png"};

public:
    selection();

    Coor getCoor() const;           //返回坐标
    QString getPicturePath() const; //返回选择框图片路径
    bool getDisplay() const;        //返回显示状态
    const pic* getChildButtonArr() const;    //返回子按钮数组
    unsigned int getSelSideLength() const;    //返回选择框边长
    unsigned int getButSideLength() const;    //返回子按钮边长
    const QString* getTowerPicturePathArr() const;   //返回防御塔图片路径数组
    void setCoor(const int, const int);       //设置坐标
    void setDisplay(const bool);      //设置显示状态
};

#endif // SELECTION_H
