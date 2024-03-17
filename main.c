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
















// // Om en av dessa två är "True" då executar den hela True.
//     // Alltså en räcker för vara true för ge true.
//     if(3 > 2 || 2 > 5) {
//         printf("True\n");
//     }
    
//     // om båda är true då executar den hela True. Men om en är True då ge den false.
//     // alltså måste båda vara true.
//     if(3 > 2 && 1 > 2) {
//         printf("True\n");
//     }else{
//         printf("False\n");
//     }

//     // != Not Equal.
//     if (1 != 2) {
//         printf("True\n");
//     }else{
//         printf("False\n");
//     }
    
//     // Negation operatorer.
//     // om hela (3 > 2) är true då om man ! framför då ger den tillbaka False. 
//     if(!(3 < 2)) {
//         printf("True");
//     }

// int max(int num1, int num2, int num3){
//     int result;
//     if(num1 >= num2 && num1 >= num3){
//         result = num1;
//     } else if(num2 >= num1 && num2 >= num3){
//         result = num2;
//     } else {
//         result = num3;
//     }



//     return result;
// }




