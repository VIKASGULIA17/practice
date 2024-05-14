#include<stdio.h>
#include<string.h>
int main(){
    char s1[35],s2[35],s3[]="is a friend of";
    printf("enter first string");
    gets(s1);
    printf("enter fsecond string");
    gets(s2);
    puts(strcat(s1,strcat(s3,s2)));
    int i=0;
    while (s1[i]!='\0')
    {
        printf("%c",s1[i]);
        i++;
    }
    
    
}