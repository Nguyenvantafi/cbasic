#include <stdio.h>
#include <math.h>

int main(){
	double x;
	scanf("%lf", &x);
	double x1 = pow(x, 2);
	double x2 = pow(x, 3);
	double x3 = pow(x, 4);	
	printf("%.2lf %.2lf %.2lf", x1, x2, x3);	
	return 0;
}

