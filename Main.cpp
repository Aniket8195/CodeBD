#include <iostream>

void fibonacciSequence(int n) {
    int a = 0, b = 1;
    while (a <= n) {
        std::cout << a;
        if (a + b <= n) {
            std::cout << " ";
        }
        int sum = a + b;
        a = b;
        b = sum;
    }
}

int main() {
    int n;
    std::cin >> n;

    fibonacciSequence(n);

    return 0;
}