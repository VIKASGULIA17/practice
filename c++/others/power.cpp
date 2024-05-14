#include <iostream>
using namespace std;
int sum(int , int );
int main()
{
    cout<<sum(2, 4);
}
int sum(int p, int q){
    if (q==0)
    return 1;
    return p*sum(p,q-1);
}