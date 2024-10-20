#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int maxScoreOptimized(vector<int> &a, vector<int> &b)
{
    int n = b.size();
    long long maxval = INT_MIN;
    for(int i=0;i<4;i++){
    long long sum=0;
    int sums=0;
        for(int j=0;j<n;j++){
            sums=a[i]*b[j];
        }
        sum+=sums;
        maxval=max(sum,maxval);
    }
    return maxval;
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {5, 3, 6, 1, 9, 2};

    int result = maxScoreOptimized(a, b);
    cout << "Maximum score: " << result << endl;

    return 0;
}
