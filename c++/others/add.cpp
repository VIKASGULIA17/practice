#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 1; i < 5; i++)
    {

        arr[i] += arr[i - 1];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}