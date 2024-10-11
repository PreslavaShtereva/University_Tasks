#include <stdio.h>

int main() {

	int n, factorial = 1;

	printf("Value for n: ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("Please enter a positive value");
	}
	else {
		for (int i = 1; i <= n; ++i) {
			factorial *= i;
		}
		printf("The result is: %d", factorial);
	}
	return 0;
}
