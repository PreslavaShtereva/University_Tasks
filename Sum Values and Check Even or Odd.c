#include<stdio.h>

int main() {
	
	int n;
	int arr[100];

	printf("Anzahl der Werte: ");
	scanf("%d", &n);


	while (n > 100 || n < 0) {

		printf("Bitte geben Sie einen korrekten Wert: ");
		scanf("%d", &n);
	}


	for (int i = 0; i < n; i++) {

		printf("Alle Werte: ", i+1);
		scanf("%d", &arr[i]);

	}

	int summe = 0;

	for (int i = 0; i < n; i++) {
		summe += arr[i];
	}
	if (summe % 2 == 0) {
		printf("even");
	}
	else {
		printf("odd");
	}


	return 0;
}
