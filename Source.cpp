// Lab_03_4.cpp 
// < �������� ������ > 
// ����������� ������ � 3.4 
// ������������, ������ ������� �������. 
// ������ 1
#include <iostream>
using namespace std;
int main()
{
    double x;
    double y;
    double R;
    cout << "x= "; cin >> x;
    cout << "y= "; cin >> y;
    cout << "R= "; cin >> R;
    if (y >= 0 && x >= 0 && y >= x && R * R >= x * x + y * y || y <= 0 && x <= 0 && y <= x && R * R >= x * x + y * y)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}