#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 14; i++)
    {
        if (i==6)
        {
            continue;
        }
        else if (i==12)
        {
            break;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}