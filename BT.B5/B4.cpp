#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap N lon hon 0 \n");
		scanf("%d",&n);
	}while(n<=0);
	int dt=0;
	for(n;n!=0;n=n/10){
		int sd=n%10;
		dt=sd;
	}
	
	
		printf("Chu so cua n la %d",dt);
}
