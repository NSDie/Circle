#include <cstdlib>
#include <iostream>
#include "method.h"
using namespace std;

int main(int argc, char *argv[])
{
    double r,Area;
    cout << "������Բ����� r ��  "; 
    cin >> r ;
    Area = area(r);
    cout <<"Բ������ǣ�"<<Area<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
