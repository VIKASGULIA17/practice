#include <iostream>
using namespace std;
class num
{
    int nl;

public:
    void set(int x)
    {
        nl = x;
    }
    int get()
    {
        return nl;
    }
};
int main()
{
    num a;
    int n;
    cin >> n;
    a.set(n);
    cout << a.get();
}
