#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap N lon hon 0 \n");
		scanf("%d",&n);
	}while(n<=0);
	int t=0;
	for(n;n!=0;n=n/10){
		int sd=n%10;
		t+=sd;
	}
	
	
		printf("Tong cac chu so cua n la %d",t);
}
