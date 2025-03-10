#include <stdio.h>
#include <math.h>

int main() {
    double x, eps, sin = 0, n;
    int i = 0, j;
    double k = 1;
    printf("Nhap gia tri x (do): ");
    scanf("%lf", &x);
    printf("Nhap gia tri epsilon (eps): ");
    scanf("%lf", &eps);
    x = x * 3.14 / 180;
    do {
        for (j = 1; j <= 2 * i + 1; j++) {
            k *= j;
        }
        n = pow(-1, i) * pow(x, 2 * i + 1) / k;
        sin += n;  
        i++;
    } while (fabs(n) > eps);
    printf("Gia tri sin(x) tinh duoc la: %.10lf\n", sin);
	return 0;
}

