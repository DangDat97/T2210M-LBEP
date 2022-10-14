#include <stdio.h>
int main(){
    int a;
    printf("Nhap vao so A = ");
	scanf("%d",&a);
	int b;
	printf("Nhap vao so B = ");
	scanf("%d",&b);
	int c;
	if(a%b==0){
		c=a/b;
		printf("Thuong cua A chia cho B = %d",c);
	}else{
		printf("Ko tim thay thuong");
	}
	
	
}
