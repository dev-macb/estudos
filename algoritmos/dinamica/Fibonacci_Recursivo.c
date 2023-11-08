#include <stdio.h>

unsigned long long int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

int main() {
    int n = 10;
    printf("Sequência de Fibonacci até o %dº termo:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%llu ", fibonacciRecursive(i));
    }
    printf("\n");
    return 0;
}