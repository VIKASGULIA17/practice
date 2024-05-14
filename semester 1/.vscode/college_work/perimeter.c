#include<stdio.h>
#include<conio.h>
void main(){
    
    int area,per,side;
    printf("enter value of side");
    scanf("%d",&side);
    area=side*side;
    per=4*side;
    printf("area of square %d\n",area);
    printf("perimeter is%d \n",per);
    getch();

}