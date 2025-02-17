#include <stdio.h>
int main(){
    int num1,num2,result;
    char op;
    scanf("%d%d%d",&num1,&num2,&result);
    scanf("%c",&op);
    switch(op){
        case '+':
        result = num1 + num2
        printf("%d",result);
        break;

        case '-':
        result = num1 - num2
        printf("%d",result);
        break;
        
        case '*':
        result = num1 * num2
        printf("%d",result);
        break;
        
        case '/':
        result = num1 / num2
        printf("%d",result);
        break;

        default:
            printf("Error")
    }
    return 0;
}