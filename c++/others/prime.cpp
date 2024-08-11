#include<iostream>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
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
    else{
        cout<<"not prime";
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