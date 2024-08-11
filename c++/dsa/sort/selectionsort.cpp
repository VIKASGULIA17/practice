#include <iostream>
#include <vector>
using namespace std;
int selection(vector<int> &v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin>> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    selection(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}