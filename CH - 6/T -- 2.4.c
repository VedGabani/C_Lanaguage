#include<stdio.h>
 main()
 {
 	int a,b,c,d,e;
 	 
 	printf("enter the value of a :");
 	scanf("%d",&a);
 	printf("enter the value of b :");
 	scanf("%d",&b);
 	printf("enter the value of c :");
 	scanf("%d",&c);
 	printf("enter the value of d :");
 	scanf("%d",&d);
 	printf("enter the value of e :");
 	scanf("%d",&e);
 	if(a==b&&b==c&&c==d&&d==e)
	{
		printf("All values are same");
	}
	else
	{
		if(a==b&&b==c)
		{
			printf("A,B and C are same");
		}
		else
		{
			if(a==c&&c==d)
			{
				printf("A,C and D are same");
			}
			else
			{
				if(a==b&&b==d)
				{
					printf("A,B and D are same");
				}
				else
				{
					if(a==b&&b==e)
					{
						printf("A,B and E are same");
					}
					else
					{
						if(a==c&&c==e)
						{
							printf("A,C and E are same");
						}
						else
						{
							if(a==d&&d==e)
							{
								printf("A,D and E are same");
							}
							else
							{
								if()
								if(b==c&&c==d)
					{
						printf("B,C and D are same");
					}
					else
					{
						if(a==b)
						{
							printf("A and B are same");
						}
						else
						{
							if(b==c)
							{
								printf("B and C are same");
							}
							else
							{
								if(c==d)
								{
									printf("C and D are same");
								}
								else
								{
									if(b==d)
									{
										printf("B and D are same");
									}
									else
									{
										if(a==d)
										{
											printf("A and D are same");
										}
										else
										{
											if(a==c)
											{
												printf("A and C are same");
											}
											else
											{
												if(a>b)
											 	{
											 		if(a>c)
											 		{
											 			if(a>d)
											 			{
											 				printf("a is a max ...");
														}
														else
														{
														    printf("d is a max ...");	
														}
													}
													else
													{
														if(c>d)
														{
															printf("c is a max ...");
														}
														else
														{
															printf("d is a max ...");
														}
													}
												}
												else
												{
													if(b>c)
													{
														if(b>d)
														{
															printf("b is a max ...");
														}
														else
														{
															printf("d is a max ...");
														}
													}
													else
													{
														if(c>d)
														{
															printf("c is a max ...");
														}
														else
														{
															printf("d is a max ...");
														}
													}
											    }
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												} 	
											 	
																		}
																	}
																}
																
 }