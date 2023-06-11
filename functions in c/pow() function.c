//create our own pow() function
#include <stdio.h>

int myPow(int base, int exponent) {
    int res = 1;
    for(int i = exponent; i > 0; i--) {
    	res *= base;
	}
	
	return res;
}

int main() {
    int base, exponent, result = 1;
    printf("Enter a base number\n:");
    scanf("%d", &base);
    printf("Enter an exponent\n:");
    scanf("%d", &exponent);
    
    result = myPow(base, exponent);
	printf("\nResult=%d", result);
	return 0;
	
}
