#include <stdio.h>
#include <math.h>

#define pi 3.14

int main(){
	double R, S, V;
	scanf("%lf", &R);
	if (R > 0){
		S = 4 * pi * pow(R , 2);
		V = (4/3) * pi * pow(R , 3);
		printf("%.2lf %.2lf", S, V);   
	}
	else printf("Hay nhap lai");
	return 0;

}

