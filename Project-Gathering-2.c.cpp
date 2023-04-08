#include<stdio.h>

int sum(int array[])
{	
    int i,sum=0;
	for(i=0;array[i]!=NULL;i++)
	{
		sum=sum+array[i];
	}
	printf("Addition of Array is =%d",sum);
	return sum;
}
main()
{
int a[100],i,n;

	printf("Enter the value for N-> ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);	
	}
	sum(a);
}
