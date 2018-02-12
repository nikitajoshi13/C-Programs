#include<stdio.h>
void main()
{
	int arr1[20][20],arr2[20][20],i,j,n,m,p,q;
	printf("enter the size of array 1\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&arr1[i][j]);
	    }
   }
   printf("the elements of array 1\n");
   for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",arr1[i][j]);
	    }
	    printf("\n");
   }
   	printf("enter the size of array 2\n");
	scanf("%d%d",&p,&q);
	if(m!=p||n!=q)
	{
		printf("addition not possible\n");
	}
	else
	{
	printf("enter the elements\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&arr2[i][j]);
	    }
   }
   printf("the elements of array 2\n");
   for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",arr2[i][j]);
	    }
	    printf("\n");
   }

printf("the addition is\n");
for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
						printf("%d\t",arr1[i][j]+arr2[i][j]);
	    }
	    printf("\n");
   }
}
}
