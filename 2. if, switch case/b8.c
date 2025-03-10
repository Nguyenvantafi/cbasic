#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c;
	double C, S;
	printf("Nhap a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a <= 0 || b <= 0 || c <= 0 )
		printf("Canh cua tam giac phai lon hon 0\n");
	else if (a + b <= c || a + c <= b || b + c <= a)
		printf("Ba canh nay khong the tao thanh mot tam giac\n");
	else {
		C = a + b + c;
		double p = C / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		if (a == b && b == c)
            printf("Day la tam giac deu\n");
        else if (a == b || b == c || a == c) {
            if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
                printf("Day la tam giac vuong can\n");
            else
                printf("Day la tam giac can\n");
        } 
		else if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
            printf("Day la tam giac vuong\n");
        else
            printf("Day la tam giac thuong\n");
		printf("Chu vi tam giac: %.2lf\n", C);
		printf("Dien tich tam giac: %.2lf", S);
	}
	return 0;
}

