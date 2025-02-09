#include<iostream>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 3;
    std::cout << "Fibonacci(" << n << "): " << fibonacci(n) << std::endl;
    return 0;
}
