#include<stdio.h>
#include<string.h>
int main(){
    struct anime
    {
        int episode;
        char name[10];
        char mc[19];
    };
    struct anime big3;
    big3.episode=1090;
    strcpy(big3.name,"one piece");
    strcpy(big3.mc,"luffy");
    printf("%d\n",big3.episode);
    printf("%s\n",big3.mc);
    printf("%s",big3.name);
}