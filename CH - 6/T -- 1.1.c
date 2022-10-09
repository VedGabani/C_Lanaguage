#include<stdio.h>
main()
{
	int a,b;
	printf("=> Enter the value of a =");
	scanf("%d",&a);
	printf("=> Enter the value of b =");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("a is minimum number");	
	}
	
	else
	{
		printf("b is minimum number");
	}	
}