#include <iostream>
using namespace std;
#define max 100
int main()
{
    int arr[max], n, k, j = 0;
    cout << "enter the number of elements in array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the no. of elements u want to reverse";
    cin >> k;
    k = k % n;
    int a[n];
    for (int i = n - k; i < n; i++)
    {
        a[j++] = arr[i];
    }
    if (k == n)
    {

        for (int i = 0; i < k + 1; i++)
        {
            a[j++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}