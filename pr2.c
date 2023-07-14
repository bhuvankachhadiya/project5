#include<stdio.h>
int main()
{
	int a[5],max1,max2,i;
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	max1=max2=0;
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>max1)
		{
		max2=max1;
		max1=a[i];
		}
		else if(a[i]>max2 && a[i]<max1)
		max2=a[i];
	}
	printf("2nd largest element=%d",max2);
}
	
