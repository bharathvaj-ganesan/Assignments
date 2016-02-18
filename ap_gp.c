#include<stdio.h>
#include<string.h>
int main()
{
    int n,s,s1,d,i,ret;
    char *ch;
    printf("Enter the value for N , S and D : ");
    scanf("%d%d%d",&n,&s,&d);
    printf("\nEnter 'AP' for Arithmetic progression and 'GP' for Geometric progression ");
    printf("\nType :");
    scanf("%s",ch);
    s1=s;
    ret = strcmp(ch,"AP");
    if(ret==0)
    {
        for(i=0;i<n;i++)
        {
            printf("%d\t",s1);
            s1=s1+d;
        }
    }
    else
    {

        for(i=0;i<n;i++)
        {
            printf("%d\t",s1);
            s1=s1*d;
        }

    }
    return 0;
}
