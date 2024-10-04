#include <stdio.h>

int main() {
	
	int x, rest;
	int rev = 0;

	printf("Value for x: ");
	scanf_s("%d", &x);

	while (x != 0) {

		rest = x % 10;
		rev = rev * 10 + rest;
		x /= 10;
	}

	printf("The result is = %d", rev);

	return 0;

}
