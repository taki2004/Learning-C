// - Have a simple calc program. The program calculates only 2 inputs and give the option for the operation(add, subtract, multiply, divide, power)  
// - Add a go back feature, switching between current, previos and main(starting point)
// - Add a exit button, where the user can press something, like EOF to immidietly end the program.
// - Add fail saftey feauture, when pressed eof.
// - fix reverse option! Have it before rounding option, what was the taught process of only positives.
// - rounding options are a bit messy.

#include "calculator.h"

int main(){
    calculatorfunction();
    return 0;
}

// Run: gcc calculator_main.c calculator_features.c calculator_operations.c -o calculator && ./calculator
