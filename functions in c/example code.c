#include <stdio.h>

void add(int a, int b);

int myPow(int num, int p) {
//	2, 3 = 2 * 2 * 2
     int res = 1;
    for(int i = p; i > 0; i--) {
    	res *= num;
	}
	
	return res;
}

int main() {
	
	printf("2 the power 3 is = ", myPow(2, 3));
	return 0;
	
}

void add(int a, int b) {
	int sum = a + b;
	printf("Sum is %d\n", sum);
	
	return 0;
}
