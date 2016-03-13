#include<stdio.h>
int concat(int ,int );
int digits(int );
int main()
{
    int n,n1,result,tc=0,k,m,t,p;
    printf("Enter the number :");
    scanf("%d",&n);
    int l=log10(n);
    l++;
    int mid =l/2;
    k=mid;n1=n;
    while(n1!=0)
    {
        n1=n1/10;
        tc++;
    }
    if(tc!=1)  //checking for single digit number.
    {
        if(l%2==0)      //even number of digits
        {
            p=digits(mid);
            t=n%p;
            n=n/p;
            result=concat(t,n);
            printf("%d",result);
        }
        else            //odd number of digits
        {
            p=digits(mid);
            t=n%p;  //getting last half
            n=n/p;
            m=n%10;   // getting middle value
            n=n/10;
            result=concat(t,m);
            t=n%p;      //getting first half
            result = concat(result,t);
            printf("%d",result);
        }

    }
    else
    {
        printf("\n Please do not enter single digit number");
    }
    return 0;
}
int concat(int x ,int y)        //concatenate two numbers for example: 12 and 34 result: 1234
{
    int p=10;
    while(y>=p)
    {
        p *=10;
    }
    return x*p+y;
}
int digits(int mid)
{
    int p=1;
    while(mid)
    {
        p *=10;
        mid--;
    }
   return p;
}

