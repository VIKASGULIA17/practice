#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3,5,6,8,1,9,0};
    int target = 6;
    int length=sizeof(arr)/sizeof(int);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == j)
            {
                continue;
            }
            else{
                if (arr[i]+arr[j]==target)
                {
                    cout<<"["<<i<<","<<j<<"]";
                    return 0;
                }
                
            }
        }

    }
        return 0;
}