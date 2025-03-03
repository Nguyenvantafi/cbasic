#include <stdio.h>

int main() {
    double a, b, c, d, e, f;
    double D, Dx, Dy;
    double x, y;
    printf("Nhap a, b, c, d, e, f: ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);   
    D = a * e - b * d;
    if (D == 0) {
        if ((a * f - c * d) == 0 && (b * f - c * e) == 0)
            printf("He phuong trinh co vo so nghiem\n");
		else
            printf("He phuong trinh vo nghiem\n");
    }
	else {
        Dx = c * e - b * f;
        Dy = a * f - c * d;      
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem duy nhat:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }
    return 0;
}
