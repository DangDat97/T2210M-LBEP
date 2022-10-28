#include <stdio.h>
#include <math.h>
#include "B7.h"

int main(){
	int p=chuvi(5,6,9);
	printf("Chu vi bang = %d \n",p);
	float s=dientich(5,6,9);
	printf("Dien tich bang = %f \n",s);
	int total=Total(569);
	printf("Tong cac chu so = %d \n",total);
	int uc=ucln(14,28);
	printf("UCLN la = %d \n",ucln);
	int bc=bcnn(14,28);
	printf("BCNN la = %d \n",bcnn);
	if(ktrSCP(569)){
		printf("la SCP \n");
	}else{
		printf("ko la SCP \n");
	}
	
	if(ktrSN(569)){
		printf("giam dan tu trai sang phai \n");
	}else{
		printf("Ko giam dan tu trai sang phai \n");
	}
	
	
	int y=findN(0);
	printf("%d la so be nhat 1+2+3+...+n <1000 \n",y);
}
