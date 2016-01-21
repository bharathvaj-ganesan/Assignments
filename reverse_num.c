#include<stdio.h>
int main()
{
     int n,r,reverse_num;
     printf("Enter the number to be reversed");
     scanf("%d",&n);
     reverse_num = 0;
     while(n!=0)
     {
          r = n % 10;
          reverse_num = (reverse_num*10) + r ;
          n = n / 10;
     }
     printf("\n The reversed no is %d",reverse_num);
     return 0;
}
