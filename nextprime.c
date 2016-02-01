#include<stdio.h>
int main()
{
    int i,j,count,num;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=num+1;1;i++)
    {
        count =0;
        for(j=2;j<=i/2;j++)
        {
               if(i%j == 0)
               {
                count++;
                break;
               }
        }
        if(count==0)
        {
            printf("\nThe next prime no is %d",i);
            break;
        }
    }
    return 0;
}
