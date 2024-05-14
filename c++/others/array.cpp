#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "enter value at arr" << i;
        cin >> arr[i];
    }
    for (int i : arr)
    {
        cout << i << "\n";
    }
}