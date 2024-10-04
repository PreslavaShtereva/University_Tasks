#include<stdio.h>
#include<math.h>

int main() {

	int n, result;
	int sum = 0;

	printf("Value for n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		result = pow(i, 3);
		sum += result;
	}

	printf("The result is: %d ", sum);

	return 0;
}
