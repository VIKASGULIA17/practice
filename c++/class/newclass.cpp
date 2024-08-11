#include <iostream>
using namespace std;
class course
{
public:
    int roll;
    char name;
};
int main()
{
    course bca;
    bca.roll = 58;
    bca.name = 'v';
    cout << bca.roll << endl;
    cout << bca.name << endl;
    return 0;
}