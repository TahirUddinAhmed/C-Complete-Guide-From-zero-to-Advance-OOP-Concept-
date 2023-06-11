#include <stdio.h>

void printHello(); // function prototype
float pi();

int main() {
	printHello();
	float p = pi();
	printf("Value of pi is %f", p);
	return 0;
}

void printHello() {
	printf("Hello , morian!");
}

float pi() {
	return 3.14;
}
