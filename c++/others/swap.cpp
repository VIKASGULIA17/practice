#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a";
    cin >> a;
    cout << "enter b";
    cin >> b;
    cout << "swap" << endl;
    c = a;
    a = b;
    b = c;
    cout << a << "," << b;
}