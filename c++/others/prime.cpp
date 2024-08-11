#include<iostream>
using namespace std;
int main(){
    int x=0,n=12;
    for (int i = 1; i*i <= n; i++)
    {
        if (n%i==0)
        {
            x++;
            if ((n/i)!=i)
            {
                x++;
            }
            
        }
        
        
    }
    if (x==2)
    {
        cout<<"prime";
    }
    
    
    // for (int i = 0; i < 100; i++)
    // {
    //     x=1,n=i;
    //     for (int j = 0; j < i/2+1; j++)
    //     {
    //         if (i%j==0)
    //         {
    //             x=0;
    //             break;
    //         }
            
    //     }
    //     if (x!=0)
    //     {
    //         cout<<n;
    //     }
        
    // }
    
}