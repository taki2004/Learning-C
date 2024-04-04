#include "calculator.h"

void add() {
    result = num1 + num2;
    printf("result: %lf\n", result);
    roundoption();
}

void subtract() {
    result = num1 - num2;
    printf("result: %lf\n", result);
    swapping();
    roundoption();
}

void multiply() {
    result = num1 * num2;
    printf("result: %lf\n", result);
    roundoption();
}

void divide() {
    if(num2 == 0.0){
        printf("You cannot divide by zero. Please enter a different number.\n\n");
        inputnumber();
    }
    else{
        inputoperand();
    }
    result = num1/num2;
    printf("result: %lf\n", result);
    swapping();
    roundoption();
}

void power() {
    result = pow(num1, num2);
    printf("result: %lf\n", result);
    swapping();
    roundoption();
}