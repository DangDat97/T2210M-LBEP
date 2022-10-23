#include <stdio.h>
int main(){
	int a;
	int b;
	do{
		printf("Nhap A,B la so khac 0 \n");
		scanf("%d",&a);
		scanf("%d",&b);
	}while(a==0||b==0);
	int uc=0;
	
	for(int i=1;i<a;i++){
		if(a%i==0&&b%i==0){
			uc=i;
		}
	}
	int bc=0;
	for(int i=b;i>=1;i--){
		if((a*i)%b==0){
			bc=a*i;
		}
	}
	
	
	printf("UCLN cua %d va %d la %d \n",a,b,uc);
	printf("BCNN cua %d va %d la %d",a,b,bc); 
}
