#include<stdio.h>

main()
{
	int a,b;

	printf("Enter the value of b = ");
	scanf("%d",&b);
	
	a=b;
	while(a>=1)
	{
		printf("%d  ",a);
		a--;
	}
}