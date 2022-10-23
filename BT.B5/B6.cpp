#include <stdio.h>
#include <math.h>
int main(){
	int n;
	
	do{
		printf("Nhap N lon hon 0 \n");
		scanf("%d",&n);
		int f=0;
		int f1=1;
		
		
	}while(n<=0);
	int f0 = 0;
    int f1 = 1;
    int fn = 1;
	for(int i=3;i<=n;i++){
		f0=f1;
		f1=fn;
		fn=f0+f1;
	}
	
	
		printf("Trong day fibonaci o vi tri %d la %d",n,fn);
}
