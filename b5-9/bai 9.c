#include <stdio.h>

int main() {
    int nam, thang;
    int ngay;
    printf("Nhap nam, thang: ");
    scanf("%d %d", &nam, &thang);
    if (thang < 1 || thang > 12) {
        printf("Hay nhap lai\n");
        return 0;
    }
    int namnhuan;
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            ngay = 31;
            break;
        case 4: case 6: case 9: case 11:
            ngay = 30;
            break;
        case 2:
        	if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 ==0)
        		ngay = 29;
			else 
				ngay = 28;
            break;
    }
    printf("Thang %d nam %d co %d ngay", thang, nam, ngay);
    return 0;
}
