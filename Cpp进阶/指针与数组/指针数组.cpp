#include <iostream>

using namespace std;

int main()
{
    int line1[] = {1, 0, 0};    //矩阵的第一行
    int line2[] = {0, 1, 0};    //矩阵的第二行
    int line3[] = {0, 0, 1};
    
    //定义整型指针数组并初始化
    int *pLine[3] = {line1, line2, line3};
    cout << "Matrix test" << endl;

    //输出矩阵
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << pLine[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}