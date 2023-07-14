#include<stdio.h>
main()
{
	int a[3][3],i,j	;


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
			printf("%3d\n",a[i][j]);

		}
		
		
    }
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{				
			if(a[i][j]<0)
			{
				printf("negative elements=%d",a[i][j]);
			}

		}
		
		
    }
}
	
	
