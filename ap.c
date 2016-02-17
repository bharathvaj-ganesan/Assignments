#include<stdio.h>
int main()
{
    int n,s,d,i;
    printf("Enter the value for N , S and D : ");
    scanf("%d%d%d",&n,&s,&d);

    for(i=0;i<n;i++)
    {
        printf("%d\t",s);
        s=s+d;
    }
    return 0;
}
