#include <stdio.h>

int main() {
    int n;
    long long gt = 1;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        gt *= i; 
        sum += (double) 1/gt; 
    }
    printf("%.2lf", sum);
    return 0;
}
