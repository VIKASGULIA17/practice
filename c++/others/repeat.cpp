#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 5, 3, 1};
    int check = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = 0;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i];
        }
    }
}