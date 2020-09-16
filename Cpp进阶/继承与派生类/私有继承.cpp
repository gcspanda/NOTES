/**
 * 继承的访问控制
 * - 基类的public和protected成员：都以private身份出现在派生类中
 * - 基类private成员：不可直接访问
 * 
 * 访问权限
 * - 派生类中的成员函数：可以直接访问基类中的public和protected成员，
 *   但不能直接访问基类的private成员
 * - 通过派生类的对象：不能直接访问从基类继承的任何成员
 * 
 * 起到封闭基类接口的作用
 * 
*/

#include "Rectangle_private.h"
#include <iostream>
using namespace std;

int main()
{
    Rectangle rect; //定义了Rectangle类的对象
    rect.initRectangle(2, 3, 20, 10);   //设置矩形的数据
    rect.move(3, 2);    //移动矩形的位置
    cout << "The data of rect(x,y,w,h): " << endl;
    cout << rect.getX() << ","
         << rect.getY() << ","
         << rect.getW() << ","
         << rect.getH() << endl;

    return 0;
}

