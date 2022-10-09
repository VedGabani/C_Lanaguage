#include<stdio.h>
main()
{
	int x,y,z,sum;
	printf("=> Enter the value of x :- ");
	scanf("%d",&x);
	printf("=> Enter the value of y :- ");
	scanf("%d",&y);
	printf("=> Enter the value of z :- ");
	scanf("%d",&z);
	sum=x*x+2*x*y+2*x*z+y*y+2*y*z+z*z;
	printf("answer is :- %d",sum);
}
