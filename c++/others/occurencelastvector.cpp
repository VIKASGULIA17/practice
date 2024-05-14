#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int e;
        cin >> e;
        v.push_back(e);
    }
    int occ, check;
    cout << "enter search";
    cin >> occ;
    for (int i = 0; i < v.size(); i++)
    {
        if (occ == v[i])
        {
            check = i;
        }
    }
    cout << "last at index " << check;
}