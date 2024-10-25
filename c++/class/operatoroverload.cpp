#include <iostream>
using namespace std;
class complex
{
public:
    int x;
    complex(int a)
    {
        x = a;
    }
};
complex operator+(complex &n)
{
    complex ans(0);
    ans.x = n.x + n.x;
    return ans;
}

int main()
{
    complex a(4);
    complex b(5);
    complex c = +a;
    cout << c.x;
}
