#include <iostream>
#include "mathutils.h"

int main() {
    std::cout << "kr-demo math utilities\n";
    std::cout << "5! = " << mathutils::factorial(5) << "\n";
    std::cout << "gcd(48, 36) = " << mathutils::gcd(48, 36) << "\n";
    std::cout << "fib(10) = " << mathutils::fibonacci(10) << "\n";
    return 0;
}
