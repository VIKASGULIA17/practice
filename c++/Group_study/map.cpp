#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
//[1,1,,3,5,3]
//[1-2]
//[3-2]
//[5-1]
using namespace std;
int main(){
    //key value
    //1     2
    //3     2
    //5     1
    //6     1
    vector<int> v={1,1,11,3,5,3,6};
    map <int,int> mpp;//1st int =element 
    for (auto i:v)//i=1,1,3,5,3
    {
       mpp[i]+=1;
    }
    for(auto i:mpp){
        cout<<i.first<<"-"<<i.second<<endl;
    }
    return 0;
}