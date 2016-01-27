#include<stdio.h>
void con(int , int);
int main()
{
    int n,n1,b;
	printf("\n Conversion from decimal To Any Base Up to 36 \n");
	printf("Enter the decimal number ");
	scanf("%d",&n);
	if (n<0)
	{
       	printf("Negative numbers cannot be converted");
       	return 0;
    }
	printf("Enter the base to convert ");
	scanf("%d",&b);
	n1=n;
	if( (b==0)||(b==1) )
	{
		printf("Cannot have 0 or 1 as a base.");
   		return 0;
   	}
	con(n,b);
	return 0;
}

void con(int n , int b)
{
	int remain,i=0,j;
	int arr[5];
	while(n!=0)
	{
		remain = n % b;
		n = n / b;
		if(remain<10)
		{
			arr[i] = remain + '0';
		}
		else
		{
			arr[i] = remain + 55;
		}
		i++;

	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",arr[j]);
	}
}
