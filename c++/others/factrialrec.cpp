#include <iostream>
using namespace std;
int recursion(int);
int main()
{
    // int n;
    // cout << "enter the number";
    // cin >> n;
    int x = recursion(5);
    cout << "factorial of " << 5 << " is " << x;
}
int recursion(int n)
{
    int f = 0;
    if (n == 0 || n == 1)
        return 1;
    f = n * recursion(n - 1);
    return f;
}