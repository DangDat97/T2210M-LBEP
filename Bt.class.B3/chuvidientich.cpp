#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	int c;
	scanf("%d",&c);
	
	if((a>=b+c)||(b>=a+c)||(c>=a+b)){
		printf("Day ko phai 3 canh cua tam giac");
	}else{
		int cv= a+b+c;
		float p= (float)cv/2;
		float dt= sqrt(p*(p - a)*(p - b)*(p - c));
		printf("Chu vi tam gia la %d dien tich tam giac la %f",cv,dt);
	}	
}
