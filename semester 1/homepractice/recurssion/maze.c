#include<stdio.h>
int maze(int sr,int sc,int tr,int tc){
    int downward=0,right=0;
    if (sr==tr && sc==tc)
    return 1;
    if (sr==tr){
        downward +=maze(sr+1,sc,tr,tc);
       }
    if (sc==tc)
    {
        right+=maze(sr,sc+1,tr,tc);
    }
    if (sr<tr && sc<tc)
    {
    downward +=maze(sr+1,sc,tr,tc);
    right+=maze(sr,sc+1,tr,tc);
    // printf("%d",total);
    }
    int total=downward+right;
    return total;
}
int main(){
    int n;
    printf("enter rows");
    scanf("%d",&n);
    int m;
    printf("enter columns");
    scanf("%d",&m);
    int sumof=maze(1,1,n,m);
    printf(" %d",sumof);
}