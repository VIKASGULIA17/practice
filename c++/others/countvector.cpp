#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"enter number of items in  vector";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e);
    }
    int occ, check = 0;
    cout << "enter search";
    cin >> occ;
    for (int i = 0; i < v.size(); i++)
    {
        if (occ == v[i])
        {
            check += 1;
        }
    }
    cout << "count " << check;
}