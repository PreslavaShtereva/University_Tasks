#include <stdio.h>

int main() {

    int n;

    printf("Value for n: ");
    scanf("%d", &n);

    if (n == 0 || n < 0) {
        printf("The value is not correct");
    }
    else {
        printf("The results are: ");

        for (int i = 1; i <= n; i += 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
