#include<stdio.h>
main()
{
	int a[3][3],i,j,newa[3][3]	;


	printf("enter array elements=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);

		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{				
			printf("%3d",a[i][j]);

		}
		printf("\n");
    } 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			newa[j][i]=a[i][j];
		}
	}
	printf("transpose:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{				
			printf("%3d",newa[i][j]);

		}
		printf("\n");
    } 
		
	
		
		
    
}
	
	
