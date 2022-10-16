#include <stdio.h>
#include <math.h>
int main(){
	float a;
	scanf("%f",&a);
	float b;
	scanf("%f",&b);
	float c;
	scanf("%f",&c);
	float d=b*b-4*a*c;
	float x1;
	float x2;
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Pt da nhiem");	
			}else{
				printf("Pt vo nhiem");
			}
		}else{
			x1=-(c/b);
			printf("Pt co nhiem la %f", (float)x1);
		}
	}else{
		if(d>0){
			x1=(-b+sqrt(d))/2*a;
			x2=(-b-sqrt(d))/2*a;
			printf("Pt co 2 nhiem la %f va %f",x1,x2);
		}else{
			if(d==0){
				x1=-b/2*a;
				printf("Pt co nhiem kep la %f",x1);
			}else{
				printf("Pt vo nhiem");
			}
		}
	}
	
	
}
