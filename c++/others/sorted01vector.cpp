#include <iostream>
#include <vector>
using namespace std;
int sorted(vector<int> &v, int n)
{
    int count = 0;
    for (int i : v)
    {
        if (i == 0)
        {
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < count)
        {
            v[i] = 0;
        }
        else
            v[i] = 1;
    }
    for (int i : v)
    {
        cout << i;
    }
}
int main()
{
    vector<int> v;
    int n;
    cout << "enter number of element";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sorted(v, n);
}