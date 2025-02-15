#include<stdio.h>
int main(){
    int num1, num2, num3;
    scanf("%d%d%d",&num1, &num2, &num3);
    float result = (num1+num2+num3)/3;
    printf("Average:%.2f " ,result);

    return 0;
    }