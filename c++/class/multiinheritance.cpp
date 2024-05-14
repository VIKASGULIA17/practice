#include <iostream>
using namespace std;
class parent
{
public:
    parent()
    {
        cout << "parent"<<endl;
    }
};
class parent1
{
public:
    parent1()
    {
        cout << "parent1"<<endl;
    }
};
class child : public parent,public parent1
{
    public:
    child(){
        cout<<"child"<<endl;
    }
};
int main()
{
    child c;
}
