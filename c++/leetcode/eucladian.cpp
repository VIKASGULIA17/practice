#include<iostream>
using namespace std;
int eucladian(int a,int b){
    if (a==0)
    {
        cout<< b;
    }
    else if(b==0){
        cout<< a;
    }
    else if (a>b)
    {
        a=a%b;
        eucladian(a,b);
    }
    else if (a<b)
    {
        b=b%a;
        eucladian(a,b);
    }
    return 1;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    eucladian(a,b);
}