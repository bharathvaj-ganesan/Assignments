#include<stdio.h>
void fill_sum(int a[],int b[],int c[],int an,int bn)
{
	int i;
	int max;
	max=an>bn?an:bn;
	
	for(i=0;i<max;i++)
	{
		 c[i]=0;
		 if (an > i)
		 {
                c[i] =c[i]+ a[i];
         }
         if (bn > i)
		 {
                c[i] =c[i]+ b[i];
         }
	}
	for(i=0;i<an;i++)
	{
		printf("%d\t",c[i]);
	}

}
int main()
{
	int input1[5]={10,20,30,40,50};
	int input2[3]={1,2,3};
	int output[5];
	fill_sum(input1,input2,output,5,3);
	return 0;
}
