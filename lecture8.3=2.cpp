#include<stdio.h>

main()
{
	int r,c;
	printf("enter row size = ");
	scanf("%d",&r);
	printf("enter column size = ");
	scanf("%d",&c);
	int a[r][c],i,j,b[r][c],sum[r][c];
	
	printf("\n enter array elements = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d,",&a[i][j]);
		}
	}
	
	printf("\n enter array elements = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d,",&b[i][j]);
		}
	}
	printf("\n sum of A & B array elements = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d",sum[i][j]);
		}
		printf("\n");
	}
}

