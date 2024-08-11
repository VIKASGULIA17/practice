#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 6};
    int n = 4;
    int target;
    cin >> target;
    int beg = 0;
    int end = n - 1;
    while (beg <= end)
    {
        
        if (arr[mid] == target)
        {
            cout << mid;
            return 0;
        }
        if (arr[mid] > target)
            beg = mid + 1;
        else
        {
            end = mid - 1;
        }

        cout << beg;
        return 0;
    }
}