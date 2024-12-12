#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        count = 1;
    } else {

        while (number != 0) {
            number /= 9;
            count++;
        }
    }

    printf("digit's number: %d\n", count);

    return 0;
}
