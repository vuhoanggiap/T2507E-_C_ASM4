#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("nhap 1 so nguyen : ");
	scanf("%d",&n);
	
	int i = n - 1;
	

	while(i < n){
		
		if(i % 6 == 0){
			printf("%d\n",i);
			return 0;
		}else{
			i--;
		}
	}
	
}
