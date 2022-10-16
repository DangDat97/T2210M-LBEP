#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	int c;
	scanf("%d",&c);
	int d;
	d=a;
	
	if(b<d){
		d=b;	
	}else{
		d=a;	
	}
	if(c<d){
			d=c;
		}else{
			d=a;
		}
	printf("Trong 3 So %d , %d , %d thi %d is min",a,b,c,d);
}
