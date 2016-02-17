#include<stdio.h>
int main()
{
    int n,s,s1,d,i;
    printf("Enter the value for N , S and D : ");
    scanf("%d%d%d",&n,&s,&d);
    s1=s;
    for(i=0;i<n;i++)
    {
        printf("%d\t",s1);
        s1=s1+d;
    }
    return 0;
}
