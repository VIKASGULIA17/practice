#include<bits/stdc++.h>
using namespace std;
int roman(string s){
    unordered_map<char,int>x;
    x['I']=1;
    x['V']=5;
    x['X']=10;
    x['L']=50;
    x['C']=100;
    x['D']=500;
    x['M']=1000;
    int ans=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(x[s[i]]>x[s[i+1]]){
            ans+=x[s[i]];
        }
        elsex[s[i]]<x[s[i+1]]){
            ans-=x[s[i]];
        }
    }
    return ans;
    
}
int main(){
    
    roman('XI');
}