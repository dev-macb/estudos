#include <stdio.h>

unsigned long long int factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1);
    }
}

int main() {
    int n = 10;
    unsigned long long int result = factorialRecursive(n);
    printf("%d! = %llu\n", n, result);
    return 0;
}