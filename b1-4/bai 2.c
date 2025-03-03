#include <stdio.h>

int main(){
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if ( x > 0 && y > 0 && z > 0 ){
		printf("Hom nay là ngay %d/%d/%d", x, y, z);
	}
	else{
		printf("Hay nhap lai");
	}
	return 0;

}

