#include <iostream>

int add(int a, int b) {
    int result = a + b;
    return result;
}

int multiply(int a, int b) {
    int result = a * b;
    return result;
}

int main() {
    int x = 5;
    int y = 3;
    int z = 10;
    int sum = 0;
    int product = 0;

    sum = add(x, y);
    product = multiply(sum, z);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}