#include<stdio.h>

main()
{
	char Month;
	printf("Press J for January...");
	printf("Press F for February...\n");
	printf("Press M for March...\n");
	printf("Press A for April...\n");
	printf("Press m for May...\n");
	printf("Press j for June...\n");
	printf("Press x for July...\n");
	printf("Press a for August...\n");
	printf("Press S for September...\n");
	printf("Press O for October...\n");
	printf("Press N for November...\n");
	printf("Press D for December...\n");
	
	printf("\n\n\nEnter your month -- ");
	scanf("%c",&Month);
	
	switch(Month)
	{
		case'J':
		printf("Hence your month is January");
		break;
		case'F':
		printf("Hence your month is February");
		break;
		case'M':
		printf("Hence your month is March");
		break;
		case'A':
		printf("Hence your month is April");
		break;
		case'm':
		printf("Hence your month is May");
		break;
		case'j':
		printf("Hence your month is June");
		break;
		case'x':
		printf("Hence your month is July");
		break;
		case'a':
		printf("Hence your month is August");
		break;
		case'S':
		printf("Hence your month is September");
		break;
		case'O':
		printf("Hence your month is October");
		break;
		case'N':
		printf("Hence your month is November");
		break;
		case'D':
		printf("Hence your month is December");
		break;
		default:
			printf("Ghar pe ne kal");
	}
}