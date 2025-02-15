#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("Hexadecimal: %X\n", num);  // Removed the extra space after \n
    printf("Octal: %o\n", num);
    return 0;
}
