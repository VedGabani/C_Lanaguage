#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter the value of B --- --- --- --- --- ");
	scanf("%d",&b);
	
	a=1;
	
	do
	{
		printf("%d\n",a);
		
		a+=2;
	}
	while(a<=b);
}