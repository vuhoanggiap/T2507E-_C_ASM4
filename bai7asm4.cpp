#include <stdio.h>

int main(){
	int n;
	printf("hay nhap 1 so nguyen: ");
	scanf("%d",&n);
	
	int f0 = 0;
	int f1 = 1;
	
	while(f1 <= n){
		int f12 = f1;
		f1 += f0;
		f0 = f12; 
	}
	
	printf("So Fibonacci tiem can voi %d la: %d",n,f0);
	
}
