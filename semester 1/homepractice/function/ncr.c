#include<stdio.h>
int fact(int n){
    int fac=1;
    for ( int i=1; i<=n; i++)
    {
        fac=fac*i;
    }
    return fac;
    
}
void main(){
    int n,nfact,r,rfact,ncr;
    printf("enter a value");
    scanf("%d",&n);
    printf("enter a value");
    scanf("%d",&r);
    nfact=fact(n);
    rfact=fact(r);
    int nr=fact((n-r));
    ncr=nfact/(rfact*nr);
    printf("%d",ncr);
    

}