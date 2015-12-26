#include<stdio.h>
int main()
 {
         int **a;
         int i,j,temp,n;
         printf("\n Enter the order for matrix :");
         scanf("%d",&n);
         /* allocate memory for matrix */
         a = (int *)malloc(n*sizeof(int *));
         for( i=0;i<n;i++)
         {
             a[i]=(int *) malloc(sizeof(int *)*n);
         }

         /* matrix input */
         printf("\n enter matrix \n",n);
         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 scanf("%d",&a[i][j]);
             }
         }

         for(i=0;i<n;i++)
         {
             for(j=i;j<n;j++)
             {
                 temp=a[i][j];
                 a[i][j]=a[j][i];
                 a[j][i]=temp;
             }
         }
         /* to print the matrix */
         printf("\n Transpose of the given matrix is\n");

         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%d\t",a[i][j]);
             }
             printf("\n");
         }
         /* to  release the  memory*/
         for(i=0;i<n;i++)
         {
             free(a[i]);
         }
         free(a);
        return 0;
}
