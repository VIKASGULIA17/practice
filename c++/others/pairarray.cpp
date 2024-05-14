#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int pair;
    cout << "enter the number to check pair";
    cin >> pair;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] + arr[j] == pair)
            {
                cout << "the pair is (" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
}