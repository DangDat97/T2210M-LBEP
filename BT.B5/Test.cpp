#include <stdio.h>
#include <math.h>

	int timsolon(int a,int b){
		if(a>b){
			return a;
		}else{
			return b;
		}
	}
int main(){
	int x=10,y=20;
	int z= timsolon(x,y);
	printf("so lon hon la %d",z);
}	
	
