#include<stdio.h>

int main() {
	
	int n;
	int arr[100];

	printf("Number of values: ");
	scanf("%d", &n);


	while (n > 100 || n < 0) {

		printf("Please enter a correct value: ");
		scanf("%d", &n);
	}


	for (int i = 0; i < n; i++) {

		printf("Enter all values: ", i+1);
		scanf("%d", &arr[i]);

	}

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	if (sum % 2 == 0) {
		printf("even");
	}
	else {
		printf("odd");
	}


	return 0;
}
