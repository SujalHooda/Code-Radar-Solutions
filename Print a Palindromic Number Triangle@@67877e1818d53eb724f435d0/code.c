#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Loop to print each row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for the acute triangle shape
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print numbers in decreasing order
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
