#include<stdio.h>

void greetings()	//function defination
{
	int hour,minute;
	printf("\nEnter the time in 24 hr format: ");
	scanf("%d%d",&hour,&minute);
	
	if(hour>=0 && hour<12 && minute>=0 && minute<60)
	{
		printf("\nGood Morning!");
	}
	else if(hour>=12 && hour<18 && minute>=0 && minute<60)
	{
		printf("\nGood Afternoon!");
	}
	else if(hour>=18 && hour<24 && minute>=0 && minute<60)
	{
		printf("\nGood Night,sweet dreams!");
	}
	else
	{
		printf("Invalid time, please try again!");
	}
}

int main()
{
	greetings();	//function call
	return 0;
}

