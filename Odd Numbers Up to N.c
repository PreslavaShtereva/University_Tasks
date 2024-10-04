#include <stdio.h>

int main() {

    int n;

    printf("Wert für n: ");
    scanf("%d", &n);

    if (n == 0 || n < 0) {
        printf("Der Wert ist nicht korrekt");
    }
    else {
        printf("Die Ergebnisse sind: ");

        for (int i = 1; i <= n; i += 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
