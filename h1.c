#include<stdio.h>

int main() {

	int num;
	double sum = 0.0;
	int count = 0;
	double average;

	printf("Value for num and type -855 to stop the submission. ");
	scanf_s("%d", &num);

	while (num != -855) {

		sum += num;
		count++;

		printf("Value for num: ");
		scanf_s("%i", &num);

	}
	average = sum / count;

	printf("The average of all digits is: %lf \n", average);


	return 0;
}