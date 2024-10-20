#include<iostream>
#include<string>
using namespace std;

 void reverse(string &goal,int i,int j){
        while(i<=j){
            swap(goal[i],goal[j]);
            i++,j--;
        }
        return ;
    }

int main(){
    string s="abcde";
    string goal="cdeab";
    int n1=s.length();
        int n2=goal.length();
        int ind=-1;
        int ind2=-1;
        bool flag=false;
        if(n1!=n2)cout<< "false";
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(s[i]==goal[j]){
                    ind=i;
                    ind2=j;
                    flag=true;
                    break;
                }
            }
        }       
        reverse(goal,ind2+1,n2-1);
        reverse(goal,0,ind2);
        reverse(goal,0,n2-1);
        cout<<goal;
}