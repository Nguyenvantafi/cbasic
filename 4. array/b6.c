#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    	if(a[i] < 0){
    		a[i] = 0;
		}
	}
	printf("Mang sau khi thay the: ");
    for (int i = 0; i < n; i++)
    	printf("%d ", a[i]);
    return 0;
}
