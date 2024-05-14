#include<stdio.h>
void america(){
    printf("america lose\n");
    india();
    return;
}
void india(){
    printf("india wins\n");
    america();
    return;
}
int main(){
    india();
    return 0;
}