#include<stdio.h>
main()
{
	int number;
	
	printf("=>Enter your Number =");
	scanf("%d",&number);
	if(number==0)
	{
		printf("This number is zero");
	}
	
	else if(number>0)
	{
		printf("This is positive number");	
	}
	else
	{
		printf("This number is negative");
	}
}