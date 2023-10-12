#pragma once

class Calculator {
  public:
    Calculator();
    Calculator(const Calculator &) = default;
    Calculator(Calculator &&) = delete;
    Calculator &operator=(const Calculator &) = default;
    Calculator &operator=(Calculator &&) = delete;
    ~Calculator();
    double Add(double, double);
    double Sub(double, double);
    double Mul(double, double);
    double Div(double, double);
};
