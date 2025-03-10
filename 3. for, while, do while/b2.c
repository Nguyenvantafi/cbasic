#include <stdio.h>
#include <math.h>

int main() {
    int n, a = 0;
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); i++){
    	if( n % i == 0){
   			a = 1;
    		break;
		} 
	}
	if(a == 0 && n >= 2)
		printf("YES\n");		
	else
		printf("NO\n");
    return 0;
}
