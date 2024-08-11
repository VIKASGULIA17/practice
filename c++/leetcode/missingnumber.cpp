#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        int t = 0;
        for (int j = 0; j <n; j++)
        {
            if (arr[j] == i)
            {
                t = 1;
                break;
            }
        }
        if (t == 0)
        {
            cout << i;
        }
    }
}