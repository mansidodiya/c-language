#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter positive integer.\n");
        return 1;
    }

    printf("N numbers in reverse from %d to 1:\n", n);

    for (i = n; i >= 1; i--) {
        printf("%d",i);
    }

    printf("\n");
    return 0;
}

