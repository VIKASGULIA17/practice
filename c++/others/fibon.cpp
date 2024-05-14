#include <iostream>
using namespace std;
int fibo(int);
int main()
{
    int x = fibo(7);
    cout << x << endl;
}
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}