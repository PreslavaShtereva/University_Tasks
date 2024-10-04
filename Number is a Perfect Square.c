#include<stdio.h>
#include<math.h>

int main() {

	int n;

	printf("Value for n: ");
	scanf_s("%d", &n);

	if (n == 0 || n < 0) {
		printf("This square doesn't exist");
	}
		
	else if (sqrt(n) == (int)sqrt(n)) {
		printf("It is an exact square.");
	}

	else {
		printf("It is not an exact square.");
	}

	return 0;
}
