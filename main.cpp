#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    
    std::cout << "calc.Add(1.0, 2.0) = " << calc.Add(1.0, 2.0) << std::endl;
    std::cout << "calc.Sub(2.0, 1.0) = " << calc.Sub(2.0, 1.0) << std::endl;

    return 0;
}