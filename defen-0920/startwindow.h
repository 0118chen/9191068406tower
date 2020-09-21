#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QWidget>

namespace Ui {
class StartWindow;
}//定义ui命名空间

class StartWindow : public QWidget
{
//    Q_OBJECT
public:
   explicit StartWindow(QWidget *parent = 0);//显性定义，如果为0为顶级窗口，若不为0为子窗口
   ~StartWindow();

private:
   Ui::StartWindow *ui;//添加ui私有指针
};
//坐标结构
struct Coor
{
    int x, y;

    Coor(const int x = 0, const int y = 0) : x(x), y(y) {}
};

#endif // STARTWINDOW_H
