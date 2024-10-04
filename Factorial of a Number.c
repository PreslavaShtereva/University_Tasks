#include <stdio.h>

int main() {

	int n, factorial = 1;

	printf("Wert für n: ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("Bitte geben Sie einen positiven Wert");
	}
	else {
		for (int i = 1; i <= n; ++i) {
			factorial *= i;
		}
		printf("Das Ergebniss ist: %d", factorial);
	}
	return 0;
}
