#include <stdio.h>

int main(){
	int A[100][100], B[100][100], C[100][100];
	int m, n;
	printf("Nhap so hang m: ");
	scanf("%d", &m);
	printf("Nhap so cot n: ");
	scanf("%d", &n);
	printf("Nhap ma tran A: ");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
	}
	printf("Nhap ma tran B: ");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			scanf("%d", &B[i][j]);
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			C[i][j] = A[i][j] + B[i][j];
	}
	FILE *f;
	f = fopen("CONG_MT.C", "w");
	if (f == NULL){
		printf("Loi khi mo tep\n");
		return 1;
	}
	else{
		fprintf(f, "Ma tran C: \n");
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++)
				fprintf(f, "%d ", C[i][j]);
			fprintf(f, "\n");
	}
	}
	fclose(f);
	printf("Da ghi ma tran C vao tep CONG_MT.C\n");
	return 0;
}
