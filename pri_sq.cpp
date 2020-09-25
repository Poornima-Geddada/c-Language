#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i=1,sq;
	sq=sqrt(n);
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=prime(n);
	if(res)
	{
		printf("\nPrime Number");
	}
	else
	{
		printf("\nNot a Prime Number");
	}
	return 0;
}
