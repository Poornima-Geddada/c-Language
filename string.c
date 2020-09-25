#include<stdio.h>
int small(char *str)
{
	int i,ns=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97&&str[i]<=122)
		{
			ns++;
			printf("%c, ",str[i]);
		}
	}
	return ns;
}
int capital(char *str)
{
	int i,nC=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			nC++;
			printf("%c, ",str[i]);
		}
	}
	return nC;
}
int special(char *str)
{
	int i,nS=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=32&&str[i]<=47||str[i]>=58&&str[i]<=64||str[i]>=91&&str[i]<=96||str[i]>=123&&str[i]<=126)
		{
			nS++;
			printf("%c, ",str[i]);
		}
	}
	return nS;
}
int oval(char *str)
{
	int i,no=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85||str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117)
		{
			no++;
			printf("%c, ",str[i]);
		}
	}
	return no;
}
int consonant(char *str)
{
	int i,nc=0;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)&&!(str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85||str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117))
		{
			nc++;
			printf("%c, ",str[i]);
		}
	}
	return nc;
}
int main()
{
	char str[100];
	int ns,no,nc,nC,nS;
	scanf("%[^\n]s",&str);
	printf("Small : ");
	ns=small(str);
	printf("%d",ns);
	printf("\nCapital : ");
	nC=capital(str);
	printf("%d",nC);
	printf("\nSpecial : ");
	nS=special(str);
	printf("%d",nS);
	printf("\nOval : ");
	no=oval(str);
	printf("%d",no);
	printf("\nConsonant : ");
	nc=consonant(str);
	printf("%d",nc);
	return 0;
}
