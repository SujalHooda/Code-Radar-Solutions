#include <stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible");
    }
    else{
        printf("Non Eligible");
    }
    return 0;
}