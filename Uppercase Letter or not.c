#include<stdio.h>

int main() {

	char c;

	printf("Value for char: ");
	scanf_s("%c", &c);

	if (c < 'A' || c > 'Z') {
		printf("Not an uppercase letter");
	}
	else {
		printf("Uppercase letter");
	}

	return 0;

}
