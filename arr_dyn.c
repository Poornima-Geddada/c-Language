#include<stdio.h>
#include<stdlib.h>
int isidentical(int **arr1,int **arr2,int r1,int c1)
{
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(arr1[i][j]!=arr2[i][j])return 0;
		}
	}
	return 1;
}
int read(int **arr1,int r1,int c1)
{
	int i,j;
	printf("\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
}
int main()
{
	int i,j,r1,c1,r2,c2,**arr1,**arr2;
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	if(r1!=r2||c1!=c2)
	{
		printf("\nnot identical");
		return 0;
	}
	arr1=(int**)calloc(r1,sizeof(int*));
	for(i=0;i<r1;i++)
	{
		arr1[i]=(int*)calloc(c1,sizeof(int));
	}
	arr2=(int**)calloc(r2,sizeof(int*));
	for(i=0;i<r1;i++)
	{
		arr2[i]=(int*)calloc(c2,sizeof(int));
	}
	read(arr1,r1,c1);
	read(arr2,r2,c2);
	if(isidentical(arr1,arr2,r1,c1))printf("\nidentical");
	else printf("\nnot identical");
	return 0;
}
