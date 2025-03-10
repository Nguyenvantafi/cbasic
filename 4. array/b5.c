#include <stdio.h>

int main() {
    int n, res = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; i++){
    	if (x == a[i]){
    		res++;
		}
	}
	printf("phan tu %d xuat hien %d lan trong mang\n", x, res);

    return 0;
}
