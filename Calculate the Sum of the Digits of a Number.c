#include<stdio.h>

int main() {

	int n;
	int sum = 0;

	printf("Value for n: ");
	scanf_s("%d", &n);


	while (n != 0) {

		sum += n % 10;
		n = n / 10;
	}

		printf("The result is %d", sum);

	return 0;
}
