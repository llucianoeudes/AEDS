#include <stdio.h>
#include <math.h> // Para log e sqrt

double T(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return log(sqrt(n)) + 2 * T(n-1) + T(n-2);
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("T(%d) = %lf\n", n, T(n));
    return 0;
}