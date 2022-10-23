#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	int t=0;
//	while(i<n){
//		if(n%i==0){
//			t+=i;	
//		}
//		i++;
//	}
//	if(t==n){
//		printf("n hoan hao");
//	}else{
//		printf("n ko hoan hao");
//	}
	
	for(int i=1;i<n&&n%i==0; i++){
			t+=i;
	}
	if(t==n){
		printf("n hoan hao");
	}else{
		printf("n ko hoan hao");
	}
	
}
