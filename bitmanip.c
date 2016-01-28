#include<stdio.h>

unsigned char bit2set1(unsigned char ,int);
unsigned char bitunset(unsigned char ,int);
unsigned char toggling2(unsigned char ,int);
unsigned char togglingExcept2(unsigned char *,int);
unsigned char r_rotate(unsigned char );
unsigned char l_rotate(unsigned char );
unsigned char swap_nibble(unsigned char );

void print(unsigned char );
int main()
{
	unsigned char n=11,ans;
	int ind=2;
	printf("Given number ");
	ans=n;
	print(ans);
	printf("Bit 2 set to 1: ");
	ans=bit2set1(n,ind);
	print(ans);
	printf("Bit 2 set to 0: ");
	ans=bitunset(n,ind);
	print(ans);
	printf("Toggle Bit 2: ");
	ans=toggling2(n,ind);
	print(ans);
	printf("Toggle Except bit 2: ");
	ans=togglingExcept2(&n,ind);
	print(ans);
	n=11;
	printf("Rotate right ");
	ans=r_rotate(n);
	print(ans);
	printf("Rotate left ");
	ans=l_rotate(n);
	print(ans);
	printf("swapping Nibble: ");
	ans=swap_nibble(n);
	print(ans);
	return 0;
}
void print(unsigned char ans)
{
	int i;
    for (i = 7; i >= 0; --i)
    {
        putchar( (ans & (1 << i)) ? '1' : '0' );
    }
    printf("\nDecimal Value: %d\n\n",ans);
}

unsigned char bit2set1(unsigned char n,int ind)
{
	int flag=1;
	n=n|(flag<<ind);
	return n;
}
unsigned char bitunset(unsigned char n,int ind)
{
	int flag=1;
	n=n&~(flag<<ind);
	return n;
}
unsigned char toggling2(unsigned char n,int ind)
{
	int flag=1;
	n=n^(flag<<ind);
	return n;
}
unsigned char togglingExcept2(unsigned char *n,int ind)
{
	int flag=1;
	*n=~*n|(flag<<ind);
	return *n;
}
unsigned char r_rotate(unsigned char n)
{
	if(n%2==0)
	{
		 n=n/2;
	}
	else
	{
		n=128+(n/2);
	}
	return n;
}
unsigned char l_rotate(unsigned char n)
{
	if(n>=128)
	{
		n=1+(n*2);
	}
	else
	{
		n=n*2;
	}
	return n;
}
unsigned char swap_nibble(unsigned char n)
{
	n=n<<4;
	return n;
}
