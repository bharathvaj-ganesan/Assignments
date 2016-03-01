#include <stdio.h>
int main()
{
   int  index, i, n, val;
   printf("\n enter the size :");
   scanf("%d",&n);
   n++;
   int arr[n];
   printf("\n enter the array elements : \n");
   for (i = 0; i < n-1; i++)
   {
        scanf("%d", &arr[i]);
   }
   printf("\n enter the position :");
   scanf("%d", &index);
   printf("\n enter the value to insert :");
   scanf("%d", &val);
   for(i=n-1;i>=index;i--)
   {
        arr[i+1] = arr[i];
   }
   arr[index] = val;
   for (i=0;i<n;i++)
   {
        printf("%d\t",arr[i]);
   }
   return 0;
}
