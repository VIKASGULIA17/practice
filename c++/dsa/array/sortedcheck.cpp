#include<iostream>
using namespace std;
#include<vector>
int main() {
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int count=0;
	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			count++;
		}
	}
	if(arr[0]<arr[n-1])count++;
    if(count>1)
    cout<<"false"
;
else cout<<"true"  ;
}