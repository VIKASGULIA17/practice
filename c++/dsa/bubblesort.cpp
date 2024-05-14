#include <iostream>
#include <vector>
using namespace std;
int bubble(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        int b = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                b = true;
            }
        }
        if (b == false)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble(a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }
}