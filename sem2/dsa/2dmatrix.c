#include <stdio.h>
#include <conio.h>
#define max 10
int a[max][max],b[max][max],c[max][max],i,j,k,l,n,m;
void adda();
void mular();
void subar();
void tranar();
void main()
  {
   int ch;
   printf("enrollment no:05813702023\n");
   while(ch!=5){
	printf("\n\t---Menu---\n1.Addition\n2.Multiplication\n3.Subtraction\n4.Transpose\n5.Exit\n");
	printf("Enter choice:");
	scanf("%d",&ch);
	switch(ch){
	 case 1:
	 printf("\nAdding the matrices\n");
	 adda();
	 break;

	 case 2:
	 printf("\nMultiplying the matrices\n");
	 mular();
	 break;

	 case 3:
	 printf("\nSubtracting the matrices\n");
	 subar();
	 break;

	 case 4:
	 printf("\nTransposing the matrix\n");
	 tranar();
	 break;

	 case 5:
	 break;
	  }
	}
}

void adda(){
printf("Enter the number of rows:");
scanf("%d",&n);
printf("Enter the number of columns:");
scanf("%d",&m);
printf("Enter elements for a:\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     scanf("%d",&a[i][j]);
    }
}
printf("Enter elements for b:\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     scanf("%d",&b[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     c[i][j]=a[i][j]+b[i][j];
     printf("The sum of matrices for [%d][%d]=%d\n",i,j,c[i][j]);
     }
  }
}

void mular(){
printf("Enter the number of rows for a:");
scanf("%d",&n);
printf("Enter the number of columns/rows for a&b:");
scanf("%d",&m);
printf("Enter the number of columns for b:");
scanf("%d",&k);
printf("Enter elements for a:\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     scanf("%d",&a[i][j]);
    }
}
printf("Enter elements for b:\n");
for(l=0;l<n;l++){
    for(j=0;j<k;j++){
     scanf("%d",&b[l][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<k;j++){
     for(l=0;l<n;l++){
       c[l][j]+=a[i][j]*b[l][j];
      printf("Product of matrices for:[%d][%d]=%d\n",l,j,c[l][j]);
     }
   }
 }
}
void subar(){
printf("Enter number of rows:");
scanf("%d",&i);
printf("Enter number of columns:");
scanf("%d",&j);
printf("Enter elements for a:\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     scanf("%d",&a[i][j]);
    }
}
printf("Enter elements for b:\n");
for(i=0;i<n;i++){
    for(j=0;j<k;j++){
     scanf("%d",&b[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<k;j++){
       c[i][j]+=a[i][j]-b[i][j];
      printf("Difference of matrices for:[%d][%d]=%d\n",i,j,c[i][j]);
   }
 }
}
void tranar(){
printf("Enter the number of rows:");
scanf("%d",&n);
printf("Enter the number of columns:");
scanf("%d",&m);
printf("Enter elements for matrix:\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     scanf("%d",&b[i][j]);
    }
}
 for(j=0;j<m;j++){
   for(i=0;i<n;i++){
       b[j][i]=b[i][j];
       printf("Transpose of matrix for [%d][%d]=%d\n",j,i,b[j][i]);
   }
  }
}
