#include <iostream>
using namespace std;

void main()
{
    //-----------------------------------------
    int a;
    cout << "nhap vao so nguyen a: ";
    cin >> a;
    cout << "\n Gia tri so a=[" << a << "]";
    //-------------------------------------
    if (a % 2 == 0)
    {
        cout << "\nSo [" << a << "] la so chan;";
    }
}