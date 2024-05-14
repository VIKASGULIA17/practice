#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {1, 2, 3, 6, 3, 2, 7, 1};
    int n = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    n++;
                }
            }
        }
        if (n == 0)
        {
            cout << arr[i] << endl;
        }
        n = 0;
    }
}