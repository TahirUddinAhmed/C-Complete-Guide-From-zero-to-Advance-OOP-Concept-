#include <stdio.h>

void sayHello() {
	printf("Hello, users\n");
}

void add() {
	int num1, num2, sum = 0;
	printf("Enter two number\n:");
	scanf("%d %d", &num1, &num2);
	
	sum = num1 + num2;
	printf("Sum of %d and %d is %d\n", num1, num2, sum);
}

void mul() {
	int num1, num2, multi = 1;
	printf("Enter two numbers\n:");
	scanf("%d %d", &num1, &num2);
	
	multi = num1 * num2;
	printf("Multiplication of %d and %d is %d\n", num1, num2, multi);
}

int main() {
	int choice;
	printf("1. Display Hello World\n");
	printf("2. Add two numbers\n");
	printf("3. multiply two numbers\n");
	printf("4. Display Bye\n");
	printf("Enter you choice\n: ");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1:
			// call the display function
			sayHello();
			break;
		case 2:
			// call the add function
			add();
		    break;
		case 3:
			// call the multiply function
			mul();
			break;
		case 4:
			// call the bye function
			break;
		default:
			printf("Please choose a valid option!");
			break;
	}
	return 0;
}
