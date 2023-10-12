#include "./lib/calc.h"
#include <iostream>

int main() {
    Calculator calc;
    std::cout << "Hello world" << std::endl;
    std::cout << "1 + 2 = " << calc.Add(1, 2) << std::endl;
    std::cout << "1 - 2 = " << calc.Sub(1, 2) << std::endl;
    std::cout << "1 * 2 = " << calc.Mul(1, 2) << std::endl;
    std::cout << "1 / 2 = " << calc.Div(1, 2) << std::endl;
    return 0;
}
