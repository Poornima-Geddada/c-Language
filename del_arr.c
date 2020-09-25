#include<stdio.h>
int delete_array(int *arr,int pos,int n)
{
	int i;
	for(i=pos-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	return 0;
}
int main()
{
	int n,arr[10],pos,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	scanf("%d",&pos);
	delete_array(arr,pos,n);
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
