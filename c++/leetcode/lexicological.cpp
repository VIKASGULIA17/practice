#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
   
        for(int i=0;i<s.length();i++){
        int before = s[i] - '0';
        int after = s[i+1] - '0';
            if(before>after && before % 2 == after % 2 ){
                swap(s[i],s[i+1]);
                break;
                }
            
        }
        cout<<s;
}
// for (int i = 0; i < s.length() - 1; ++i) {
//             if (s[i] > s[i + 1] && (s[i] % 2 == s[i + 1] % 2)) {
//                 swap(s[i], s[i + 1]);
//                 break;
//             }
//         }
