#include <stdio.h>
#include <string.h>
int reverse(char str[30])
{

    int i = 0, count = 0;
    printf("before reverse\n");
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
        count+=1;
    }
    char new[count];
    for (int i = 0; i < count; i++)
    {
        new[i] = str[count - i - 1];
    }
    new[i++]='\0';
    i=0;
    printf("after reverse\n");
    printf("%s",new);
}
int main()
{
    char str[30];
    printf("enter the string");
    fgets(str, sizeof(str), stdin);
    reverse(str);
}