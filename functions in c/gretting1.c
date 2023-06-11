#include<stdio.h>

void greetings()	//function defination
{
	int hour, minute;
	printf("\nEnter the time in 24 hr format: ");
	scanf("%d%d",&hour,&minute);
	if(hour <= 24 && hour>=0 && minute>=0 && minute<60) {
		
		if(hour>=0 && hour<12) {
		   printf("\nGood Morning!\n");
		   
	    } else if (hour>=12 && hour<18) {
		   printf("\nGood Afternoon!\n");
		   
	    } else if (hour>=18 && hour<24) {
		   printf("\nGood Night,sweet dreams!\n");
		   
     	}
	} else {
		printf("Invalid time, please try again!\n");
	}
	
	
	
}

int main()
{
	
	int choose;
	
	do {
		printf("\n1. Start Program\n");
		printf("2. exit (x)\n");
		
		printf("Enter your choice\n:");
		scanf("%d", &choose);
		
		switch(choose) {
			case 1: 
				greetings();	//function call
			    break;
			case 2:
				printf("\nThank you for visiting us! Have a nice day");
				break;
			default: 
			   printf("\n Please choose a valid option!");
			   break;
		}
		
		
	} while(choose == 1);
	
	
	return 0;
}

