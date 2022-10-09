#include<stdio.h> 
main()
{  
    int startyear, endyear, i;  
    printf ("Enter a year to start searching the leap years: ");  
    scanf ("%d", &startyear);  
   
    printf ("Enter a year to end the search of leap years: ");  
    scanf ("%d", &endyear);  
    
	printf ("Leap Years between %d to %d are: \n", &startyear, &endyear);  
    for (i= startyear, i<=endyear,i++)
    {  
         if((i%4==0) && (i%400==0) || (i%100!==0))  
         {  
          printf("%d \n", &i);  
         }   
    }   
} 