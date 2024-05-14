#include <iostream>
#include <vector>
using namespace std;
int reverse(vector<int> &x)
{
    int l = 0;
    int r = x.size() - 1;
    while (l < r)
    {
        if (x[l] % 1 == 0 && x[r] % 2 == 0)
        {
            int temp = x[l];
            x[l++] = x[r];
            x[r--] = temp;
        }
        if (x[l] % 2 == 0)
        {
            l++;
        }
        if (x[r] % 2 == 1)
        {
            r--;
        }
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    reverse(v);
    cout << "The sorted array is: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}