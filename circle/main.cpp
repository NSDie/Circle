#include <cstdlib>
#include <iostream>
#include "method.h"
using namespace std;

int main(int argc, char *argv[])
{
    double r;
    cout << "请输入圆的面积 r ：  "; 
    cin >> r ;
    Circle c(r);
    cout <<"圆的面积是："<<c.Area()<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

