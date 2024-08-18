#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            if (secondNumber != 0.0)
                printf("%.2lf / %.2lf = %.2lf", firstNumber, secondNumber, firstNumber / secondNumber);
            else
                printf("Division by zero is not allowed.");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
