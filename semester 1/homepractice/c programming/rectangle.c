#include<stdio.h>
int main(){
    int len,brea,area,pem;
    printf("enter length of rectangle");
    scanf("%d",&len);
    printf("%d",&brea);
    printf("enter breadth");
    scanf("%d",&brea);
    area=len*brea;
    pem=2*(len+brea);
    if (area>pem){
        printf("area is greater %d",area);

    }
    else{
        printf("perimeter is greater");
    }

    return 0;
}