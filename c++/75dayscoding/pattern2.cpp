#include <bits/stdc++.h>
using namespace std;
int pattern()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
int pattern1(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
int pattern2(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
int pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
int pattern4(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
int pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
int pattern6(int n)
{
    for (int i = 1; i < 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j < stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
int pattern7(int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            temp = 1;
        
        for (int j = 0; j <= i; j++)
        {
            cout << temp<<" ";
            temp = 1 - temp;
        }
        cout << endl;
    }
    return 0;
}
int pattern8(int n){
    int space=2*(n-1);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        for (int j = 1; j <=space;j++)
        {
            cout<<" ";
        }
        for (int p = i; p >=1; p--)
        {
            cout<<p;
        }
        space-=2;
        cout<<endl;
    }
    return 0;
}
int pattern9(int n){
    int x=1;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<x++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int pattern10(int n){
    for (int i = 1; i < n+1; i++)
    {
        for (char j = 'A'; j <'A'+i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int pattern11(int n){
    for (int i = n; i >=1; i--)
    {
        for (char j = 'A'; j <'A'+i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int pattern12(int n){
    for (int i = 0; i <n; i++)
    {
        char ch='A'+i;
        for (int j =0; j<=i; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int main()
{
    // int n;
    // cin>>n;
    cout << endl;
    pattern12(5);
}