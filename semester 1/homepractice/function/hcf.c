#include<stdio.h>
int min(int x,int y){
    if (x>y){
        return y;
    }
    else{
        return x;
    }
    
}
int hcf(int p,int q){
    int hc;
    for ( int i = min(p,q); i>=1; i--)
    {
        if (p%i==0 && q%i==0)
        {
            hc=i;
            break;
        }
    return hc;
    }
    
}
int main(){
    int a,b;
    printf("enter value of a");
    scanf("%d",&a);printf("enter value of b");
    scanf("%d",&b);
    int s=hcf(a,b);
    printf("hcf is %d",s);

}