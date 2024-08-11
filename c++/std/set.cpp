#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int,greater<int>> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    cout<<s.size();
    cout<<endl;
    auto it=s.begin();
    for (it;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
    s.emplace(4);
    for (it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
    s.clear();
    for (it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
}