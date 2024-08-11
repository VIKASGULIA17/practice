#include <iostream>
#include <vector>
using namespace std;
int bubble_Sort(vector<int> &a)
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
    return 0;
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
    bubble_Sort(a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}