#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }  
    int pair;
    cout << "enter the number to check pair";
    cin >> pair;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
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


