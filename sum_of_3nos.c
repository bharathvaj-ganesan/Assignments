#include<stdio.h>
int fun(int ,int ,int );
int main()
{
    int a,b,c,i,sum = 0;
    printf("Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n Using variables :");
    printf("\t %d",a+b+c);
    printf("\n Using array :");
    int arr[3]={a,b,c};
    sum=0;
    for(i=0;i<3;i++)
    {
        sum = sum + arr[i];
    }
    printf("\t\t %d",sum);
    sum = 0;
    printf("\n Using function call :");
    sum = fun(a,b,c);
    printf("\t %d",sum);
    return 0;
}
int fun(int a,int b,int c)
{
    return a+b+c;
}
