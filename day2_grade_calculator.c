#include <stdio.h>
#include <stdbool.h>

int main()
{
        while(1)
	{	int score;
	        char grade;
	
        	printf("What is your score: ");
        	scanf("%i", &score);

        	if (score >=70 && score <=100)
        	{
		grade = 'A';
        	}
        	if (score >=60 && score <=69)
        	{
		grade = 'B';
        	}
        	if (score >=50 && score <=59)
        	{
 
		grade = 'C';
        	}
        	if (score >=45 && score <= 49)
        	{
		grade = 'D';
        	}
        	if (score >=40 && score <=44)
        	{
  		grade = 'E';
        	}
        	if (score >=0 && score <=39)
        	{
		grade = 'F';
        	}
        	printf("Your Grade is: %c\n", grade);
        	}
        	return 0;
}
