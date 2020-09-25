#include<stdio.h>
int gcd(int a,int b)
{
	int res=1,temp;
	while (b)
	{
		if(a>b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		b=b%a;
	}
	res=a;
	return res;
}
int main()
{
	int a,b,res;
	scanf("%d %d",&a,&b);
	res=gcd(a,b);
	printf("\n%d",res);
	return 0;
}
