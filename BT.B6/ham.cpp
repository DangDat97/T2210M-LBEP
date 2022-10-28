#include <stdio.h>
#include <math.h>
#include "demothuvien.h"

int main(){
	int x1=21;
	int Songuoc=reverse(x1);
	printf("so nguoc cua %d la %d \n",x1,Songuoc);
	
	int num1=7 ; int num2=10 ; int num3=2;
	int Max= max3(num1,num2,num3);
	printf("Max cua %d,%d,%d la %d \n",num1,num2,num3,Max);
	
	int n=8;
	int Num=num_in_F(n);
		printf("Trong day fibonaci o vi tri %d la %d \n",n,Num);
	
	int t=total(n);
	printf("Tong tu 1,2,3,... den %d la %d \n",n,t);
	
	double t_on=total_on(n);
	printf("Tong tu 1,1/2,1/3,... den 1/%d la %f \n",n,t_on);
	
	if(ktrSoNto(x1)){
		printf("%d la so Nguyen to",x1 );
	}else{
		printf("%d  ko la so Nguyen to",x1 );
	}
	
}	
	
