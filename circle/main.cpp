#include <cstdlib>
#include <iostream>
#include "method.h"
using namespace std;

int main(int argc, char *argv[])
{
    double r;
    cout << "������Բ����� r ��  "; 
    cin >> r ;
    Circle c(r);
    cout <<"Բ������ǣ�"<<c.Area()<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

