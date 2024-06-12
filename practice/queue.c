#include <stdio.h>
#define max 10
int queue[max];
int rear = -1;//0
int front = -1;//0
//[34,657,78,57,234]
//deletion from front =insertion end
int push()
{
    if (rear>=max-1)
    {
        printf("overflow\n");
        return 0;
    }
    if (front == -1)
    {
        front = rear = 0;
        printf("enter the number\n");
        scanf("%d", &queue[front]);
        return 0;
    }
    rear = rear + 1;
    printf("enter the number\n");
    scanf("%d", &queue[rear]);
}
//[3]
int pop(){
    if (front==0&&rear==0)
    {
        printf("the element deleted is %d\n",queue[rear]);
        front=rear=-1;
    }
    else if(rear==-1){
        printf("\nunderflow\n");
        return 0;
    }
    else
        printf("\nthe element deleted is %d\n",queue[front]);
        front=front+1;
}
int display(){
    printf("\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\t",queue[i]);
    }
}
int main()
{
    for (int i = 0; i < 12; i++)
    {
        push();
    }
    // printf("%d\t%d\n",rear,front);
    display();
    pop();
    display();
    pop();
    display();
    
}