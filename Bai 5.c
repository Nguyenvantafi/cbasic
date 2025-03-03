#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Nhap a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double x1, x2, delta;
    delta = b*b -4*a*c;
    if ( a == 0){
    	if ( b == 0 ) printf("NO");
    	else{
    		x1 = -c/b;
    		printf("%.2lf", x1);
	}
	}
    else{
		if (delta < 0 ) printf("NO");	
		else if (delta == 0){
			x1 = -b/(2*a);
			printf("%.2lf", x1);
		}
		else{
			x1 = (- b + sqrt(delta))/(2*a);
			x2 = (- b - sqrt(delta))/(2*a);
			printf("%.2lf %.2lf", x1, x2);
	}
	}
	return 0;
}
