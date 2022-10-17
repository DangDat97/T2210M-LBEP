#include <stdio.h>
#include <math.h>
int main(){
	float a;
	scanf("%f",&a);
	
	if(a<=0){
		printf("Ko co ich cho XH :))");
	}else{
		if(a>15){
			float lr = (float)30/100*a;
			printf("Luong rong la %f trieu va thue thu nhap la 30 %%",lr);
		}else{
			if(a>7){
				float lr= (float)20/100*a;
				printf("Luong rong la %f trieu va thue thu nhap la 20 %%",lr);
			}else{
				float lr= (float)10/100*a;
				printf("Luong rong la %f trieu va thue thu nhap la 10 %%",lr);
			}
		}
	}
	
//	if(a<=0){
//		printf("Ko co ich cho XH");
//	}
//	if(a>0&&a<7){
//		float lr= (float)10/100*a;
//  	printf("Luong rong la %f trieu va thue thu nhap la 10 %%",lr);
//	}
//	if(a>7&&a<=15){
//		float lr= (float)20/100*a;
//		printf("Luong rong la %f trieu va thue thu nhap la 20 %%",lr);
//	}
//	if(a>15){
//		float lr = (float)30/100*a;
//		printf("Luong rong la %f trieu va thue thu nhap la 30 %%",lr);
//	}
}
