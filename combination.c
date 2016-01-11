
/* the limit ranges from 1 to 100 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sp,i,n, v[100], stack[100];
    printf(" Enter the limit : ");
    scanf("%d",&n);
    printf(" Enter the numbers : ");
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&v[i]);
    }
    sp=-1;
    while(1)
    {
        // this loops executes until stack overflows
          while(sp<n-1)
         {
              sp=sp+1;
              stack[sp]=1;
              for (i=0 ; i<=sp ; i++)
                if (stack[i]==1)
                printf("%d ",v[i]);
              printf("\n");
         }
    // unstack all the zeros until top of stack is equals "1"
         while (stack[sp]==0 && sp>=0)
            sp=sp-1;
   // stop when bottom is reached
         if (sp<0)
        break;
    // set top of stack  to "0" for each loop iteration
          stack[sp]=0;
      }
    return 0;
}
