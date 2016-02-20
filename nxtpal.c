#include<stdio.h>
int main()
{
	int n,n1,i,j,t,c=0,f=0,pivot;
	scanf("%d",&n);
	n=++n;
	n1=n;
	while(n1!=0)
	{
		t=n1%10;
		n1=n1/10;
		c++;

	}
	n1=n;
	int arr[c],arr1[c];
	i=c-1;
	while(n1!=0)
	{
		t=n1%10;
		arr[i]=t;
		n1=n1/10;
		i--;
	}
	for(i=0;i<c;i++)
	{
		arr1[i]=arr[i];
	}
	pivot=c/2;
	j=pivot-1;
	if(c%2==0)
    {
         for(i=pivot;i<c;i++)
         {
            arr1[i]=arr1[j];
            j--;
          }
          for(i=0;i<c;i++)
         {
            if(arr1[i]<arr[i])
            {
                f=1;
            }
        }
        if(f==1)
        {
            arr1[pivot]++;
            arr1[pivot-1]++;
        }
    }
    else
    {
         for(i=pivot+1;i<c;i++)
         {
            arr1[i]=arr1[j];
            j--;
         }
         for(i=0;i<c;i++)
         {
            if(arr1[i]<arr[i])
            {
                f=1;
            }
        }
        if(f==1)
        {
            arr1[pivot]++;
        }

    }
	for(i=0;i<c;i++)
	{
		printf("%d\t",arr1[i]);
	}

	return 0;
}


				
