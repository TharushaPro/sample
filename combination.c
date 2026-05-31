#include <stdio.h>

long long fact(long long x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    long long result = 1;
    for (long long i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    long long numerator = 1;
    long long denominator = fact(m);
    
    for (int i = 0; i < m; i++) {
        numerator *= (n - i);
    }
    
    long long result = numerator / denominator;
    printf("C = %lld\n", result);
    
    return 0;
}
