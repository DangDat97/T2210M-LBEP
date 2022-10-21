#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap N la so khac 0");
		scanf("%d",&n);
	}while(n==0);
		int x=0;
		while(n!=0){
			int sd=n%10;
			x=x*10+sd;
			n=n/10;	
		}
		printf("So nguoc cua n la %d",x);
}
