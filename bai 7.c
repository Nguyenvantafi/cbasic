#include<stdio.h>

int main(){
	double n;
	scanf("%lf", &n);
	if ( n < 0 || n > 10)
		printf("Hay nhap lai");
	else {
		if (n < 5) printf("Yeu");
		else if ( n >= 5 && n < 7 ) printf("Trung binh");
		else if ( n >= 7 && n < 8 ) printf("Kha");
		else if ( n >= 8 && n < 9 ) printf("Gioi");
		else printf("Xuat sac");
	}
	return 0;
}

