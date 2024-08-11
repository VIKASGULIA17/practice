#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int len = 0;
    string str;
    int count=0;
    string a[] = {"flower", "flow", "flight"};
    int n = size(a);
    int minlen;
    for (int i = 0; i < n - 1; i++)
    {
        // for (int j = 0; j < n - i - 1; j++)
        // {
        //     if (a[j] > a[j + 1])
        //     {
        //         swap(a[j], a[j + 1]);
        //     }
        // }
        if (size(a[i])>size(a[i+1]))
        {
            minlen=size(a[i+1]);
            str=a[i+1];
        }
        
    }
    cout<<minlen;
    cout<<str;
    string prefix;
    for (int j = 0; j <minlen ; j++)
    {
        for (int i = 0; i < size(str); i++)
        {
            if (a[j][i]!=str[i])
            {
                return str.substr(0,count);
            }
            
        }
            count++;
        
    }
    return str.substr(0,count);
    
}