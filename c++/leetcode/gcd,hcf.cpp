#include<iostream>
using namespace std;
int main(){
    int a=28,b=40;
    int hcf=1;
    int gcd=1;
    for (int i = 1; i < a+1; i++)
    {
        if (i<=b)
        {
            if(a%i==0 &&b%i==0){
                // cout<<i<<" ";
                hcf=i;
                gcd=i;
            }
            
        }
        else{
            break;
        }
        
    }
    cout<<"hcf is : "<<hcf<<endl;
    cout<<"gcd is : "<<gcd;
}