#include<stdio.h>
main()
{
	char alpha;
	char a,e,i,o,u;
	
	printf("=> Enter value of alpha :-");
	scanf("%c",&alpha);
	if( alpha=='a' || alpha=='e'|| alpha=='i'|| alpha=='o'|| alpha=='u')
	{
		printf("=> Your alphabet is vowel");
	}
	else
	{
		printf("=> Your alphabet is consaonant");
	}
}