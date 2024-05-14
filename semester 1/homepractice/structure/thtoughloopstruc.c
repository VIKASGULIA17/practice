#include<stdio.h>
#include<string.h>
int main(){
    typedef struct anime
    {
        char name[20];
        int episode;
        float rating;
        char mcname[30];
    } anime;
    anime big3[2];
     for (int i = 0; i < 2; i++)
     {
        scanf("%s %d %s %f",&big3[i].name,&big3[i].episode,&big3[i].mcname,&big3[i].rating);
     }
     for (int i = 0; i < 2; i++)
     {
        printf("%s %d %s %f",big3[i].name,big3[i].episode,big3[i].mcname,big3[i].rating);
        printf("\n");
     }
     
     
       
}