#include<stdio.h>
int main()
{
   int n,i,j,m;
   printf("Enter the number of rows\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(int k=n-1;k>=i;k--)
         printf(" ");

      for(j=1;j<=i;j++)
         printf("%d",j);
            
      for(m=i-1;m>0;m--)
         printf("%d",m);
         
      printf("\n");    
   } 
}