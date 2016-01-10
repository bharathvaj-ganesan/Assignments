
/* the array size can be set  from 1 to 100 for the input limit */

#include <stdio.h>
int main()
{
        int p= -1,i,n, a[100], stack[100];
        printf(" Enter the limit : ");
        scanf("%d",&n);
        for (i=0 ; i<n ; i++)
        {
                a[i]=i+1;
        }
        while(1)
        {
                // this loops executes until stack overflows
                while(p<n-1)
                {
                    p=p+1;
                    stack[p]=1;
                    for (i=0 ; i<=p ; i++)
                    {
                        if (stack[i]==1)
                        {
                            printf("%d ",a[i]);
                        }
                    }
                    printf("\n");
                }
                // unstack all the zeros until top of stack  equals "1"
                while (stack[p]==0 && p>=0)
                {
                    p=p-1;
                }
                // set top of stack  to "0" for each loop iteration
                stack[p]=0;
                // stop when bottom is reached
                if (p<0)
                {
                    break;
                }
        }
        return 0;
}
