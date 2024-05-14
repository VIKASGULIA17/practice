
#include <iostream>
using namespace std;
#define max 9
int arr[max];
int front = -1;
int rear = -1;
int insertion(int item)
{
    ++rear;
    // cout << rear << endl;
    if (front == -1)
    {
        front = rear = 0;
        arr[rear] = item;
    }
    else
    {
        arr[rear] = item;
    }
    // cout << arr[rear] << " ";
}
int deletion()
{
    if (front == -1)
    {
        cout << "empty";
        return 0;
    }
    else if (front == 0 && rear == 0)
    {
        cout << "deleted item is " << arr[front] << endl;
        front = rear = -1;
        return 0;
    }
    else
    {
        cout << "deleted item is " << arr[front] << endl;
        front++;
    }
}
int traverse()
{
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    insertion(1);
    insertion(2);
    insertion(3);
    insertion(4);
    insertion(5);
    traverse();
    deletion();
    traverse();
}