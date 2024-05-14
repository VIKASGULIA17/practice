#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int even = 0, odd = 0;
    int arr[5] = {23, 65, 28, 22, 44};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    cout << "deference is " << even - odd << endl;
}