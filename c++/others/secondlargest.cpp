#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 1400, 6, 8, 8656, 9030, 76}, max2 = 0;
    int max = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (max > arr[i] && arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    cout << max << endl;
    cout << max2 << endl;
}
