#include<stdio.h>
main()
{

	int a[4],i;
	printf("enter elements=");
	for(i=0;i<3;i++)
	{ 
	    printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	printf("non rotated array\n");
	for(i=0;i<3;i++)
	{ 
	    printf("%d\n",a[i]);
	}
	printf("rotated array\n");
	for(i=0;i<3;i++)
	{ 
	    printf("%d ",a[i]);
	}
    
}
