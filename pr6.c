#include<stdio.h>
main()
{

	int a[3][3],i,j,sum=0	;


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
			printf("%d\n",a[i][j]);

		}
    }
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{				
			if(i==j)
			sum=sum+a[i][j];

		}
    }

printf("sum of diagonal elements=%d",sum);	
}
