#include <stdio.h>

int add(int, int);
void mul(int, int);


int main() {
	int num1, num2, sum = 0;
	printf("Enter two number\n:");
	scanf("%d %d", &num1, &num2);
	
	// function call
	sum = add(num1, num2);
	printf("Sum is %d\n", sum);
	// call the mul function
	mul(num1, num2);
	return 0;
}

void mul(int x, int y) {
	int z = x * y;
	printf("Multiplication of two number is %d\n", z);
}

int add(int a, int b) {
	int c = a + b;
	return c;
}





