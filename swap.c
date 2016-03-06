#include<stdio.h>
int main()
{
    int n,n1,t,i,mid,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        n1=n1/10;
        c++;
    }
    n1=n;i=c-1;
    int temp[c];
    while(n1!=0)
    {
        t=n1%10;
        temp[i]=t;
        n1=n1/10;
        i--;
    }
    mid=c/2;
    if(c%2==0)
    {
        for(i=0;i<mid;i++)
        {
            t=temp[i];
            temp[i]=temp[mid+i];
            temp[mid+i]=t;
        }
    }
    else
    {
        for(i=0;i<mid;i++)
        {
            t=temp[i];
            temp[i]=temp[mid+i+1];
            temp[mid+i+1]=t;
        }
    }
    for(i=0;i<c;i++)
    {
            printf("%d",temp[i]);
    }
    return 0;
}
