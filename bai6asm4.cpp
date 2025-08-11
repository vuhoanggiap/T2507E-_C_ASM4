#include <stdio.h>

int main(){
	int n;
	printf("hay nhap 1 so nguyen: ");
	scanf("%d",&n);
	
	int f0 = 0;
	int f1 = 1;
	int fn;
		
	if(n == 0){
		printf("F0: %d",f0);
		return 0;
	}
	
	if(n == 1){
		printf("F1: %d",f1);
		return 0;
	}
	if(n == 2){
		fn = 1;
		printf("F2: %d",fn);
		return 0;
	};
	
	int i = 2;
	while(i <= n){
		fn = f0 + f1;
		f0 = f1; 
		f1 = fn;
		i++;
	}
	printf("So F%d la: %d",n,fn);
	
}
