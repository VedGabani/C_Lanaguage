#include<stdio.h>
main()
{
	int age;
	printf("=> Enter Your age =");
	scanf("%d",&age);
	if(age>=18 && age<=60)
	{
		printf("=> You can vote");
	}
	else
	{
		printf("=> You cannot vote");
	}
}