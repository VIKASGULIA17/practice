#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int v[] = {1, 22, 35, 422, 5342};
    int c;
    for (int i = 1; i < 5; i++)
    {
        if (v[i] > v[i - 1])
        {
            c = 1;
        }
        else
        {
            c = 0;
            break;
        }
    }
    if (c == 1)
    {
        cout << "sorted";
    }
    else
    {
        cout << "not sorted";
    }
}