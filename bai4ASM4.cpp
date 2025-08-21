#include <stdio.h>

int main() {
    int n, a = 0, socuoi;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int original = n; 
	
	if(n < 0){
		n = n * - 1;
		while (n > 0) {
        socuoi = n % 10;          
        a = a * 10 + socuoi; 
        n = n / 10;
		};
	}else if(n > 0){
		while (n > 0) {
        socuoi = n % 10;          
        a = a * 10 + socuoi; 
        n = n / 10;
		};
	}else{
		a = 0;
		printf("%d",a);
	}
	printf("So dao nguoc cua %d la: %d\n", original, a);
    return 0;
}


