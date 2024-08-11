#include <iostream>
using namespace std;
int main()
{
    int nums[10] = {0,0,1,1,1,2,2,3,3,4};

        int j = 1;
        for(int i = 1; i < 10; i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        // return j;

    for (int i = 0; i <10 ; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}