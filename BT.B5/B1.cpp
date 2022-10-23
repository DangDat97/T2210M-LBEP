#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap N la so khac 0");
		scanf("%d",&n);
	}while(n==0);
	int t=0;
//	for(int i=1;i<=n&&n%i==0;i++){
//		printf("%d , ",i);
//		t+=i;
//	}
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d , ",i);
			t+=i;
		}
	}
	
	
	
	printf("Tong uoc cua n la %d",t); 
}
