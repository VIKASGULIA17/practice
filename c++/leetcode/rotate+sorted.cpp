#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 6, 1, 2};
    int n = 5;
    int c = 0;
    int x = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            c++;
        }
        else
        {
            x++;
        }
    }
}