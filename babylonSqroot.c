#include<stdio.h>

int main()
{
    int n,num,c=10;
    float ans, guess=1, r;
    printf("\n Enter the number");
    scanf("%d",&num);
    n=num;
    r = n/guess;
    guess = (guess + r)/2;
    while (c > 0)
    {
        r = n/guess;
        guess = (guess + r)/2;
        if (guess <= (guess * 0.01) + guess)
        {
            ans = guess;
        }
        else
        {
            r = n/guess;
        }
        guess = (guess + r)/2;
        c-=1;
    }
    printf(" The square root is %f",ans);
    return 0;
}
