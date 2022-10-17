#include <stdio.h>
#include <math.h>
int main(){
	float a;
	scanf("%f",&a);
	
	if(a<=0){
		printf("Ko co hoa hong");
	}else{
		if(a>300){
			float hh = (float)20/100*a;
			printf("Hoa Hong la %f trieu",hh);
		}else{
			if(a>100){
				float hh= (float)10/100*a;
				printf("Hoa Hong la %f trieu",hh);
			}else{
				float hh= (float)5/100*a;
				printf("Hoa Hong la %f trieu",hh);
			}
		}
	}
	
//	if(a<=0){
//		printf("Ko co hoa hong");
//	}
//	if(a>0&&a<100){
//		float hh= (float)5/100*a;
//		printf("Hoa Hong la %f trieu",hh);
//	}
//	if(a>100&&a<=300){
//		float hh= (float)10/100*a;
//		printf("Hoa Hong la %f trieu",hh);
//	}
//	if(a>300){
//		float hh = (float)20/100*a;
//			printf("Hoa Hong la %f trieu",hh);
//	}
}
