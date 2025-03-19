#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct danhSachSinhVien{
	char hoTen[50];
	int tuoi;
	double dtb;
	struct SinhVien* next;
};

typedef struct danhSachSinhVien ds;

ds* nhap(ds* a){
	ds* sinhvien = (ds*)malloc(sizeof(ds))*;
	printf("Nhap ho va ten: ");
	gets(a->hoTen);
	printf("Nhap tuoi: ");
	scanf("%d", &a->tuoi);
	printf("Nhap diem trung binh: ");
	scanf("%lf", &a->dtb);
}

void them(ds** a, char hoTen[], int tuoi, double dtb) {
    ds* sv = nhap();
    if (*a == NULL) {
        *a = sv;
        return;
    }
    ds* tmp = *a;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    temp->next = sv;
}

void in(ds* a){
	printf("\nDANH SACH SINH VIEN");
	printf("\nSTT \t Ho ten \t Tuoi \t Diem TB");
	printf("\n%s %d %.2lf");
}

void chen(ds** a, char tenCanChenTruoc[], char hoTen[], int tuoi, double dtb) {
}

int main() {
	ds* danhSach = NULL;
    int chon;
    char hoTen[50], tenCanChenTruoc[50], tenCanXoa[50];
    int tuoi;
    double diemTB;
	do {
        printf("\nMENU:");
        printf("\n1. Them sinh vien");
        printf("\n2. Hien thi danh sach sinh vien");
        printf("\n3. Chen sinh vien vao truoc sinh vien nao do");
        printf("\n4. Xóa sinh viên");
        printf("\n5. Thoát");
        printf("\nCh?n thao tác: ");
        scanf("%d", &chon);
        getchar();
        switch (chon) {
        	case 1:
        		
        	case 2:
        		in(danhSach);
        		break;
        	case 3:
        		
        	case 4:
        		
        	case 5:
        		printf("Thoát chuong trình.\n");
                break;
            default:
                printf("L?a ch?n không h?p l?! Vui lòng nh?p l?i.\n");
        }
    }
	while(chon != 5);
	return 0;
}
