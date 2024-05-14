#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {0, 1, 2, 3, 4, 5, 2, 3, 0};
    int pair = 5;
    // cout << "enter the number to check pair";
    // cin >> pair;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (arr[i] + arr[j] + arr[k] == pair)

                {
                    cout << "the pair is (" << arr[i] << "," << arr[j]
                         << "," << arr[k] << ")" << endl;
                }
            }
        }
    }
}