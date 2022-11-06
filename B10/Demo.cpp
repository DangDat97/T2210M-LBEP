#include <stdio.h>
#include <stdlib.h>
int trungbinhcong(int arr[],int n){
	
}
int trungbinhcong2(int *arr,int n){
	// 2 cach khai bao nhu nhau
}

int main(){
	int *p;
	p = (int *)malloc(5*sizeof(int));// int p[5]
	p = (int*)calloc(5,sizeof(int));
// gia su them 3 phan tu nua trong mang
	p = (int*)realloc(p,8*sizeof(int));
	
	free(p); //Giai phong o nho cho p  
}
