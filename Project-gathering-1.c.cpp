#include<stdio.h>

int fact(int nu)
{
	if(nu<=1)
	{
	  return 1;
	}
	else
	{
	  return nu*fact(nu-1);
	}
}
main()
{
	int a,f;
	
	printf("Enter the value->");
	scanf("%d",&a);
	f=fact(a);
	
	printf("Factorial of %d =%d",a,f);
}
