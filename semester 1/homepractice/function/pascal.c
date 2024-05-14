#include<stdio.h>
int fact(int n){
    int fac=1;
    for ( int i=1; i<=n; i++)
    {
        fac=fac*i;
    }
    return fac;   
}
int com(int x,int y){
    int nfact=fact(x);
    int rfact=fact(y);
    int nr=fact((x-y));
    int ncr=nfact/(rfact*nr);
}
int main(){
    int n,nfact,r,rfact,ncr;
    printf("enter a value");
    scanf("%d",&n);
    for ( int i = 0; i <=n; i++)
    {
        int pas=0;
        for (int j = 0; j<=i; j++)
        {
            pas=com(i,j);
            printf("%d ",pas);
        }
        printf("\n");
    }
    return 0;
}