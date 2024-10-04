#include <stdio.h>

int main() {

	int n, result;
	int array[100];

	printf("Number of elements: ");
	scanf_s("%d", &n);


	for (int i = 0; i < n; i++) {
		printf("Enter a value: ");
		scanf_s("%d", &array[i]);
	}

	result = array[0];

	for (int i = 1; i < n; i++) {
		if (array[i] > result) {
			result = array[i];
		}
	}

	printf("The largest number is: %d\n", result);


	return 0;
}
