#include <stdio.h>

int main(){
	int n;
	printf("hay nhap 1 so:");
	scanf("%d",&n);

	if(n < 2){
		printf("day khong phai so nguyen to");
		return 0;
	};
	
	int dem = 0;
	for(int uoc = 1;uoc <= n;uoc++){
		if(n % uoc == 0){
			dem++;
		};
	}
	
	if(dem == 2){
		printf("day la so nguyen to");
	}else{
		printf("day khong phai so nguyen to");
	}
	return 0;
}

