#include <stdio.h>
#include <stdlib.h>

double num1;
double num2;
char op;

void get_number(){
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);
}


int calculator(){
    if(op == '+'){
        printf("%f", num1 + num2);
    } else if(op == '-') {
        printf("%f", num1 - num2);
    } else if(op == '*'){
        printf("%f", num1 * num2);
    } else if(op == '/') {
        printf("%f", num1 / num2);
    }else {
        printf("Invalid Operator.");
    }
}


int main() {
    get_number();
    calculator();
    return 0;
}