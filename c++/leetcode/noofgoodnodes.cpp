#include <iostream>
using namespace std;
int main()
{
    int edges[6][2] = { {0, 1},
                        { 0, 2 },
                        { 1, 3 },
                        { 1, 4 },
                        { 2, 5 },
                        { 2, 6 } } ;
    int temp = edges[0][0];
    int count = 1;
    int i = 1;
    while (edges[i][1] == temp)
    {
        count++;
        i++;
    }
    int counter = 1;
    int n = edges[i][1];
    for (i + 1; i < 6; i++)
    {
        if (edges[i][1] == n)
            count++;
        else
        {
            n = edges[i][1];
        }
    }
    cout << count;
}
