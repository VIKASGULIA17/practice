#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int &i : arr)
    {
        cout << "enter "
             << " element of array";
        cin >> i;
    }
    int sum = 0;
    for (int i : arr)
    {
        sum += i;
    }
    cout << "sum of arr is " << sum;
}