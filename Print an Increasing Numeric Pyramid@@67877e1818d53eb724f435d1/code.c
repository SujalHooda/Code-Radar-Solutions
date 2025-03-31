#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Loop to print each row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for the pyramid shape
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print numbers in increasing order from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
