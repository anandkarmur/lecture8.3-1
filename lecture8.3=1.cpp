#include<stdio.h>

main()
{
	int r,c;
	printf("enter row size = ");
	scanf("%d",&r);
	printf("enter column size = ");
	scanf("%d",&c);
	int a[r][c],i,j,length,sum=0,ave;
	length = sizeof(a)/sizeof(a[0][0]);
	
	printf("length of 2D array = %d\n",length);
	printf("\n enter array elements = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d,",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			sum = sum + a[i][j];
	    }
	    printf("\n");
    }
    
    printf("\nsum of all 2D array elements = %d\n",sum);
    ave = sum/length;
    printf("average of array = %d\n",ave);
		
    
	    
	
}
