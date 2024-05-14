#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter";
        int n;
        cin >> n;
        v.push_back(n);
    }

    for (int i : v)
    {
        cout << i;
    }
}