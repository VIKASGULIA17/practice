#include <iostream>
using namespace std;
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 20, b = 70;
    int *c = &a;
    int *d = &b;
    swap(c, d);
    cout << a << " " << b;
    cout << *c << " " << *d;
}