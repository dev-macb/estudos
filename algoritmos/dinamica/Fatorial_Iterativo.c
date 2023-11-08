#include <stdio.h>

unsigned long long int factorialIterative(int n) {
    unsigned long long int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 10;
    unsigned long long int result = factorialIterative(n);
    printf("%d! = %llu\n", n, result);
    return 0;
}