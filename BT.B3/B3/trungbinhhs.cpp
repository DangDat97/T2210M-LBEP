#include <stdio.h>
#include <math.h>
int main(){
	float a;
	scanf("%f",&a);
	
	if(a<0||a>10){
		printf("Nhap lai :))");
	}else{
		if(a>=9){
			printf("Hoc Sinh Xep Hang A");
		}else{
			if(a>=7){
				printf("Hoc Sinh Xep Hang B");
			}else{
				if(a>=5){
					printf("Hoc Sinh Xep Hang C");
				}else{
					printf("Hoc Sinh Xep Hang F");	
				}
			}
		}
	}
	
//	if(a<=0||a>10){
//		printf("Nhap lai :))");
//	}
//	if(a>=9&&a<=10){
//		printf("Hoc Sinh Xep Hang A");
//	}
//	if(a>=7&&a<=9){
//		printf("Hoc Sinh Xep Hang B");
//	}
//	if(a>=5&&a<7){
//		printf("Hoc Sinh Xep Hang C");
//	}
//  if(a>=0&&a<5){
//      printf("Hoc Sinh Xep Hang D");
//	}
}
