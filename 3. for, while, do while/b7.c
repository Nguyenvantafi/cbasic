#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++) {
    	sum += (double) 1/i ;
	}
	printf("S = %.2lf", sum);
    return 0;
}

