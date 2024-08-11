#include <iostream>
using namespace std;
#define max 100
int arr[max];
int partition(int first, int last)
{
    int pivot = arr[last];
    int i = first - 1;
    int j = first;
    for (; j < last; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[last]);
    return i + 1;
}
void quicksort(int first, int last)
{
    if (first <= last)
    {
        int pi = partition(first, last);
        quicksort( first, pi - 1);
        quicksort(pi + 1, last);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}