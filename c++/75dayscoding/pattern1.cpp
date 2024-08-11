#include<bits/stdc++.h>
using namespace std;
int pattern(){
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j< i+1;j++)
        {
           cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    pattern();
}