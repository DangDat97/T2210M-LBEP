#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=1;
	int t=0;
	while(i<n){
		if(n%i==0){
			t+=i;	
		}
		i++;
	}
	if(t==n){
		printf("n hoan hao");
	}else{
		printf("n ko hoan hao");
	}
}
