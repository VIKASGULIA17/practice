#include <iostream>
using namespace std;
class parent
{
public:
    parent()
    {
        cout << "parent" << endl;
    }
};
class child : public parent
{
public:
    child()
    {
        cout << "child" << endl;
    }
};
class grandchild : public child
{
public:
    grandchild()
    {
        cout << "grandchild";
    }
};
int main()
{
    grandchild c;
}
