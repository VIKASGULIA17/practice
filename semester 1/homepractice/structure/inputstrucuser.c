#include<stdio.h>
int main(){
    struct anime
    {
        char name[40];
        char mc[20];
        int rating;
    }first;
    // struct anime first;
    scanf("%s",&first.name);
    scanf("%s %d",&first.mc,&first.rating);
    // scanf("%d",&first.rating);
    printf("%s",first.name);
    printf("%s",first.mc);
   printf("%d",first.rating);
    
}