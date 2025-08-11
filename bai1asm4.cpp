#include <stdio.h>

int main(){
	int n;
	printf("nhap 1 so nguyen duong : ");
	scanf("%d",&n);
	
	int ketqua;
	int i = 0;

	while(i < n){
		i++;
		ketqua = i++;
		if(ketqua % 2 !=0 && ketqua % n != 0){
			printf("%d\n",ketqua);
		}else{
			return 0;
		}
	}
	
}
