#include<stdio.h>
int prime(int n)
{
	int i=1,t=0;
	while(n>i)
	{
		if(n%i==0)
		{
			t++;
		}
		i++;
	}
	return t;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=prime(n);
	if(res==1)
	{
		printf("\nPrime Number");
	}
	else
	{
		printf("\nNot a Prime Number");
	}
	return 0;
}
