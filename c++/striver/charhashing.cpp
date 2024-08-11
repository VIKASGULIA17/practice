#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[26]={0};
    int q;
    cin>>q;
    
        for (int i = 0; i <s.size(); i++)
        {
            hash[s[i]-'a']+=1;
        }
    
    while (q--)
    {
       char number;
       cin>>number;
       cout<<hash[number-'a']<<endl;
    }
    return 0;
}