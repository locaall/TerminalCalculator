#include "calc.h"

double Calculator::Calculate(double x, char operation, double y) {
    switch (operation) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;   
    default:
        return 0;
    }

}