#include <stdio.h>

int main(){
	int A[100][100], B[100][100], C[100][100];
	int m, n, p;
	printf("Nhap so hang cua ma tran A: ");
	scanf("%d", &m);
	printf("Nhap so cot cua ma tran A va hang cua ma tran B: ");
	scanf("%d", &n);
	printf("Nhap so hang cua ma tran A: ");
	scanf("%d", &p);
	printf("Nhap ma tran A:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; i < n; j++)
			scanf("%d", &A[i][j]);
	}
	printf("Nhap ma tran B:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; i < n; j++)
			scanf("%d", &B[i][j]);
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < p; j++){
			C[i][j] = 0;
			for (int k = 0; k < n; k++)
				C[i][j] += A[i][k] * B[k][j];
		}
	}
	FILE *f = fopen("TICH_MT.C", "w");
	if (f == NULL){
		printf("Loi khi mo tep\n");
		return 1;
	}
	else{
		fprintf(f, "Ma tran C:\n");
		for (int i = 0; i < m; i++){
			for (int j = 0; j < p; j++)
				fprintf(f, "%d", C[i][j]);
			fprintf(f, "\n");
		}
	}
	fclose(f);
	printf("Da ghi ma tran C vao tep TICH_MT.C\n");
	return 0;
}
