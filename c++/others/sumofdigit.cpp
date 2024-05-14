#include <iostream>
using namespace std;
int sum(int);
int main()
{
    int n = 1234;
    cout << sum(n) << endl;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum(n / 10) + n % 10;
}