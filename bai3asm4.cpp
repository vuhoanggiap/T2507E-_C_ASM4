#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("nhap 1 so nguyen va se cho ra ket qua do co phai so hoan hao khong : ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("so nhap vao khong phai so hoan hao");
	}
	
	int tongcacuoc = 0;
	int i = 1;
	while(i < n){
		if(n % i == 0){
			tongcacuoc += i;
		}
		i++;
	}
	
	if(tongcacuoc == n){
		printf("so nhap vao chinh la so hoan hao");
	}else{
		printf("so nhap vao khong phai so hoan hao");
	}
	
}
