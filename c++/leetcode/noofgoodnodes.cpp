#include <iostream>
using namespace std;
int main()
{
    int edges[6][2] = {{0, 1},
                        { 0, 2 },
                        { 1, 3 },
                        { 1, 4 },
                        { 2, 5 },
                        { 2, 6 }};
    int temp = edges[0][0];
    int count = 1;
    int i = 1;
    while (edges[i][0] == temp)
    {
        count++;
        i++;
    }
    int counter = 1;
    int n = edges[i][0];
    for (i + 1; i < 6; i++)
    {
        cout<<n<<" ";
        if (edges[i][0] == n)
            counter++;
        else
        {
            n = edges[i][0];
        }
    }
    cout << counter;
}
