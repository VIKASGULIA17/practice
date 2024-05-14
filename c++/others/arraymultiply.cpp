#include <iostream>
#define max 100
using namespace std;
int main()
{
    int arr[max][max], brr[max][max], n, m, r, s, crr[max][max];
    cout << "enter the no. of rows of first matrix";
    cin >> n;
    cout << "enter the no. of columns of first matrix";
    cin >> m;
    cout << "enter the no. of rows of second matrix";
    cin >> r;
    cout << "enter the no. of columns of second matrix";
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter element" << '[' << i << ']' << '[' << j << ']';
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << "enter element" << '[' << i << ']' << '[' << j << ']';
            cin >> brr[i][j];
        }
    }
    if (m != r)
    {
        cout << "multiplication not possible";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s; j++)
            {
                crr[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    crr[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << crr[i][j] << "\t";
        }
        cout << "\n";
    }
}