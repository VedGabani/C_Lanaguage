#include<stdio.h>
main()
{
	int x,y,sum;
	printf("=> Enter the value of x :-");
	scanf("%d",&x);
	printf("=> Enter the value of y :-");
	scanf("%d",&y);
	sum=x*x-2*x*y+y*y;
	printf("answer is :- %d",sum);
}