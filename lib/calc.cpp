#include "calc.h"

Calculator::Calculator() = default;
Calculator::~Calculator() = default;

double Calculator::Add(double a, double b) {
    return a + b;
}

double Calculator::Sub(double a, double b) {
    return a - b;
}

double Calculator::Mul(double a, double b) {
    return a * b;
}

double Calculator::Div(double a, double b) {
    return a / b;
}

