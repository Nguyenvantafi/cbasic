#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a + b = %d\n", a + b );
    printf("a - b = %d\n", a - b );
    printf("a * b = %d\n", a * b );
    if (b != 0)
        printf("a / b = %.2lf", (double) a / b);
    else
        printf("Khong the chia cho 0\n");
	return 0;
}
