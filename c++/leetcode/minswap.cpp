#include <iostream>
using namespace std;
#include <string>
int main()
{
    int num = 98368;
    int mi = 100;
    int ma = 0;
    int temp = num;
    int ind = -1;
    string s = to_string(num);
    int ind1 = -1;
    int count = s.length();
    while (num > 0)
    {
        int x = num % 10;
        count--;
        if (x < mi)
        {
            mi = x;
            ind = count;
        }
        if (x > ma)
        {
            ma = x;
            ind1 = count;
        }
        num /= 10;
    }
    swap(s[ind], s[ind1]);

    if (stoi(s) > temp)
    {
        cout << stoi(s)<<" ";
    }
    else cout << temp<<" ";
}