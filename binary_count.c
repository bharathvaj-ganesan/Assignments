#include<stdio.h>
int main()
{
     int n,n1,count=0;
     printf("Enter a decimal number :");
     scanf("%d",&n);
     n1=n;
     if(n1==0)
     {
         count++;
     }
     while(n1)
     {
         n1=n1/2;
         count++;
     }
     printf("\n the number of bits required for %d is %d",n,count);
     return 0;
}
