#include<stdio.h>

main()
{
	int num;
	printf("Press 1 for Gujarati\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for English\n");
	
	printf("\n\nPress any no -- ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
		printf("Recharge kar va mate 4 daba vo");
		printf("\nBalance jo mate 5 daba vo");
		printf("\nRecharge plane jova mate 6 daba vo");
		break;
		
		case 2:
		printf("Recharge kar ne kaliye 4 dabaye");
		printf("\nBalance dakhne kaliye 5 dabaye");
		printf("\nRecharge plane dakhne kaliye 6 dabaye");
		break;
		
		case 3:
		printf("To do recharge press 4");
		printf("\nTo see balance press 5");
		printf("\nTo see recharge plane press 6");
		
		default:
		printf ("Ghare ne kal to bavado bane ne kale call kar je recharge kar va mate");
	}
}