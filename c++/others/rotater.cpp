#include <iostream>
using namespace std;
int arr[5] = {1, 2, 3, 4, 5};
int *reverse(int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    return arr;
}
int main()
{
    int n = 5;
    int k = 2;
    reverse(n, k);
    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}