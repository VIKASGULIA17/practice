#include <iostream>
using namespace std;
int sort(int *arr)
{
    for (int i = 0; i < 5; i++)
    {

        for (int j = i + 1; j < 6; j++)
        {

            if (arr[i] > arr[j])
            {

                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << *(arr + i) << " ";
    }
}
int main()
{
    int arr[6] = {
        1, 12, 7, 34, 3, 8};
    for (int i = 0; i < 6; i++)

    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr);
    cout << endl;
}
