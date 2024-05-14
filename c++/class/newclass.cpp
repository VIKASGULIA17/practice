#include <iostream>
#include <string.h>
using namespace std;
class course
{
public:
    int rollno;
    char name;
};
int main()
{
    course bca;
    bca.rollno = 58;
    bca.name = 'v';
    cout << bca.rollno << endl;
    cout << bca.name << endl;
    return 0;
}