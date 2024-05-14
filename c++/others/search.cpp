#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int s;
    cout << "enter the element u want to  search:";
    cin >> s;
    int f = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s == arr[i])
        {
            cout << "element is present at index " << i;
            f = 1;
            break;
        }
    }
    if (f != 1)
    {
        cout << "element not present";
    }
}