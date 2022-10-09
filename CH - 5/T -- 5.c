#include<stdio.h>
main()
{
	int x,y,sum;
	printf("=> Enter the value of x :-");
	scanf("%d",&x);
	printf("=> Enter the value of y :-");
	scanf("%d",&y);
	sum=x*x*x-3*x*x*y+3*x*x*z+3*x*y*y+6*x*y*z+3*x*z*z+y*y*y+3*y*y*z+3*y*z*z+z*z*z;
	printf("answer is :- %d",sum);
}