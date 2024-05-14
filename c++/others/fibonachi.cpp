#include <iostream>
using namespace std;
int fibo(int, int, int);
int main()
{
    fibo(-1, 1, 8);
}
int fibo(int s, int e, int n)
{
    if (n == 0)
        return n;
    int fibon = s + e;
    cout << fibon << " ";
    fibo(e, fibon, n - 1);
}