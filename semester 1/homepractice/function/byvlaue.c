#include<stdio.h>
int swap(int,int);
int main(){
    int a,b;
    printf("enter vlaue of a and b");
    scanf("%d%d",&a,&b);
    printf("vlaue before swap %d %d\n",a,b);
    swap(a,b);
}
int swap(int x,int y){
    int c=x;
    x=y;
    y=c;
    printf("value of a and b after swap %d %d",x,y);

}