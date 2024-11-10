#include <stdio.h>

long long memo[1000];

long long fibonacci(int n) {
    if (n == 0) {
        memo[0] = 0;
    }

    if (n == 1) {
        memo[1] = 1;
    }

    if (memo[n] != -1) {
        return memo[n]; 
    }

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;

    for (int i = 0; i < 1000; i++) {
        memo[i] = -1;
    }


    printf("Enter the number to generate a fibonacci series: ");
    scanf("%d", &n);

    
    printf("Fibonacci number at position %d: %lld\n", n, fibonacci(n));

     printf("Fibonacci sequence up to %d:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%lld ", fibonacci(i));  
    }
    printf("\n");

    return 0;
}
