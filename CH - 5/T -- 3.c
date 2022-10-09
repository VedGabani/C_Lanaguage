#include<stdio.h>
main()
{
	int x,y,sum;
	printf("=> Enter the value of x :-");
	scanf("%d",&x);
	printf("=> Enter the value of y :-");
	scanf("%d",&y);
	sum=x*x*x+3*x*x*y+3*x*y*y+y*y*y;
	printf("answer is :- %d",sum);
}