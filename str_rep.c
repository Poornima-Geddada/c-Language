#include<stdio.h>
#include<string.h>
int arr_pos(int *arr,int pos)
{
	int i;
	for(i=strlen(arr);i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
}
int main()
{
	int i,pos,n;
	char *arr;
	arr=malloc(1024*(sizeof(char)));
	arr=realloc(arr,strlen(arr));
	scanf("%s",&arr);
	scanf("%d %d",&n,&pos);
	arr_pos(arr,pos);
	arr[pos]=n;
	for(i=0;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
