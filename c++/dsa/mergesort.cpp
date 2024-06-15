#include <iostream>
using namespace std;
int merge(int arr[], int b, int mid, int e)
{
    int x = mid - b + 1;
    int y = e - mid;
    int ar[x], br[y];
    for (int i = 0; i < x; i++)
    {
        ar[i] = arr[b + i];
    }
    for (int i = 0; i < y; i++)
    {
        br[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = b;
    while (i < x && j < y)
    {
        if (ar[i] < br[j])
        {
            arr[k++] = ar[i++];
        }
        else
            arr[k++] = br[j++];
    }
    while (i < x)
    {
        arr[k++] = ar[i++];
    }
    while (j < y)
    {
        arr[k++] = br[j++];
    }
    return 0;
}
int mergesort(int arr[], int b, int e)
{
    if (b >= e)
        return 1;
    int mid = (b + e) / 2;
    mergesort(arr, b, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, b, mid, e);
    return 0;
}
int main()
{
    int arr[6] = {17, 2, 34, 8, 4, 67};
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergesort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}