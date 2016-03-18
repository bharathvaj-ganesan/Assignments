#include<stdio.h>
int main()
{
    int i,n,k,index;
    int a[100];
    printf("\n enter the size of the array");
    scanf("%d",&n);
    printf("\n enter the elements");
    for(i=0;i<n;i++)
    {
           scanf("%d",&a[i]);
    }
    printf("\n enter the element");
    scanf("%d",&k);
    index = find_index(n,k,a);
    printf("%d",index);
    return 0;
}
int find_index(int n,int k,int a[])
{
    int i,flag=0,index;
    for(i=0;i<n;i++)
    {
  	if(a[i]>k)
  	{
         	flag=1;
    		if(a[i]<a[i+1])
    		{
    		   	index=i;
    		  	break;
    		}
    		else if(a[i]==a[i+1])
    		{
    	                index=i+1;
    		}
  	}
     }
     if(flag==0)
     { 
         return -1;
     }
     else
     {
        return index;
     }
}
