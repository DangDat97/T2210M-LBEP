#include <stdio.h>

int reverse(int n){
	int sn=0;
	for(n;n!=0;n=n/10){
		int sd=n%10;
		sn=sn*10+sd;
	}
	return sn;
}

int max3(int a,int b, int c){
	int sl=0;
	if(a>sl){
		sl=a;
	}
	if(b>sl){
		sl=b;
	}
	if(c>sl){
		sl=c;
	}
	return sl;
}

int num_in_F(int n){
	int f0 = 0;
    int f1 = 1;
    int fn = 1;
	for(int i=3;i<=n;i++){
		f0=f1;
		f1=fn;
		fn=f0+f1;
	}
	return fn;
}

int total(int n){
	int t=0;
	for(int i=1;i<=n;i++){
		t+=i;
	}
	return t;
}

double total_on(int n){
	double t=0.000;
	for(int i=1;i<=n;i++){
		t+=(double)1/i;
	}
	return t;
}
int main(){
	int x1=354;
	int Songuoc=reverse(x1);
	printf("so nguoc cua %d la %d \n",x1,Songuoc);
	
	int num1=7 ; int num2=10 ; int num3=2;
	int Max= max3(num1,num2,num3);
	printf("Max cua %d,%d,%d la %d \n",num1,num2,num3,Max);
	
	int n=8;
	int Num=num_in_F(n);
		printf("Trong day fibonaci o vi tri %d la %d \n",n,Num);
	
	int t=total(n);
	printf("Tong tu 1,2,3,... den %d la %d \n",n,t);
	
	double t_on=total_on(n);
	printf("Tong tu 1,1/2,1/3,... den 1/%d la %f \n",n,t_on);
	
	
}	
	
