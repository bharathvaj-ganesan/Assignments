#include<stdio.h>
int binarysearch(int [],int,int,int);
int main()
{
	int arr[10],n,s_key;
	int i;
	printf("Enter the size :");
	scanf("%d",&n);
	printf("\nEnter the array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the search key : ");
	scanf("%d",&s_key);

	printf("%d\n",binarysearch(arr,s_key,0,n));
	return 0;
}
int binarysearch(int arr[],int s_key,int start,int end)
{
    int middle;
	if(start<=end)
	{
		middle = (start+end)/2;
		if (arr[middle] == s_key)
		{
			return middle;
		}
		else if (arr[middle] > s_key)
		{
			binarysearch(arr,s_key,start,middle-1);

		}
		else
		{
			binarysearch(arr,s_key,middle+1,end);
		}
	}
	else
	{
		return -1;
	}
}
