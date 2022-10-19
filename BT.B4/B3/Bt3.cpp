#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=2;
	int h=0;
	while(i<=sqrt(n)){
		if(n%i==0){
			h++;	
		}
		i++;
	}
	if(h==0){
		printf("n la so nguyen to");
	}else{
		printf("n ko la so nguyen to");
	}
}
