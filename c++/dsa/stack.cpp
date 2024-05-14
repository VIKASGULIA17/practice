#include <iostream>
using namespace std;
#define max 3
int stack[max];
int top = -1;
int push(int value)
{
    if (top > max - 1)
    {
        cout << "overflow" << endl;
        return 0;
    }

    top = top + 1;
    stack[top] = value;
}
int pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
        return 0;
    }
    cout << stack[top] << " is deleted from stack" << endl;
    top = top - 1;
}
int traverse()
{
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}
int main()
{
    push(40);
    push(30);
    push(20);
    push(10);
    pop();
    pop();
    traverse();
}
