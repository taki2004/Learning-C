#include "calculator.h"

void calculatorfunction(void) { // main calculator function
  inputnumber();
  inputoperand();
}

void inputnumber() {
  printf("Enter the first number: ");
  scanf(" %lf", &num1);

  printf("Enter the second number: ");
  scanf(" %lf", &num2);
}

void inputoperand() {
  printf("Choose one of the following, (+, -, *, /, ^): ");
  scanf(" %c", &operation);
  switch (operation) {
  case '+':
    add();
    break;
  case '-':
    subtract();
    break;
  case '*':
    multiply();
    break;
  case '/':
    divide();
    break;
  case '^':
    power();
    break;
  default:
    printf("Invalid input!\n");
    inputoperand();
  }
}

void roundoption(void) {
  char roundchoice;
  printf("\nWould you like you like rounding options for the results? yes(y) "
         "or no(n): ");
  scanf(" %c", &roundchoice);

  switch (tolower(roundchoice)) {
  case 'y':
    doroundingo();
    break;
  case 'n':
    exit(0);
    break;
  default:
    printf("Invalid input!");
    roundoption();
    break;
  }
}

void doroundingo(void) {
  int roundingchoice;
  printf("\nSelect one of the following options:\n"
         "(1) Round result to its nearest integer(upwards)\n"
         "(2) Round result to its nearest integer(downwards)\n"
         "(3) Round result to its nearest ones(1 decimal)\n"
         "(4) Round result to its nearest tens(2 decimal)\n"
         "(5) Round result to its nearest hundreds(3 decimal)\n"
         "(6) Round result to its nearest thousand(4 decimal)\n"
         ": ");
  scanf(" %d", &roundingchoice);
  switch (roundingchoice) {
  case 1:
    printf("Rounded Result: %.0f\n", ceil(result));
    break;
  case 2:
    printf("Rounded Result: %.0f\n", floor(result));
    break;
  case 3:
    printf("Rounded Result: %.1f\n", round(result));
    break;
  case 4:
    printf("Rounded Result: %.2f\n", round(result));
    break;
  case 5:
    printf("Rounded Result: %.3f\n", round(result));
    break;
  case 6:
    printf("Rounded Result: %.4f\n", round(result));
    break;
  default:
    printf("Invalid number!\n");
    doroundingo();
    break;
  }
  exit(0);
}

void swapping(void) {
  char reversechoice;
  printf("Unexpected result? Would you like to reverse the numbers? yes(y) or "
         "no(n): ");
  scanf(" %c", &reversechoice);

  switch (tolower(reversechoice)) {
  case 'y':
    doswapping();
    break;
  case 'n':
    break;
  }
}
void doswapping(void) {
  double temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
      switch (operation) {
  case '-':
    result = num1 - num2;
    break;
  case '/':
    result = num1/num2;
    break;
  case '^':
    result = pow(num1, num2);
    break;
}
  printf("result: %lf\n", result);
}