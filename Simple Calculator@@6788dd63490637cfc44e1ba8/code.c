#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;
    
    // Corrected input: two integers and one character
    scanf("%d %d", &num1, &num2); // Read two integers
    scanf(" %c", &op); // Read operator (with space before %c to consume any leftover newline)
    
    // Perform calculation based on the operator
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%d", result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d", result);
            break;
        
        case '*':
            result = num1 * num2;
            printf("%d", result);
            break;
        
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d", result);
            } else {
                printf("error\n");
            }
            break;

        default:
            printf("Error\n");
    }
    
    return 0;
}
