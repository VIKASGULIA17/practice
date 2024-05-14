#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int &i : arr)
    {
        cout << "enter element of array";
        cin >> i;
    }
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << " max is " << max;
}