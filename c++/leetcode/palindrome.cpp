#include<bits/stdc++.h>
using namespace std;
int ispalindrome(int n){
    int x=n;
    int b=0;
    while (n>0)
    {
    int a=n%10;
    b=(b*10)+a;
    n=n/10;
    }
    if(b==x){
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}
int main(){
    ispalindrome(-12321);
}