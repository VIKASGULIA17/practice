#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string str;
    for(int i=0;i<s.length()/2+1;i++){
            if(s[i]==s[s.length()-i-1]){
                str+=s[i];
            }
            else{
                str+="";           
            }
           
        }
    cout<<str;
}