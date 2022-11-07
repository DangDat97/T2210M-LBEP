#include <stdio.h>
#include "min.h"
int main(){
		int n;
	printf("Nhap vao so n \n");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap vao day so \n");
	for(int i; i<n; i++){
		scanf("%d",&arr[i]);
	}
	int Min=min(arr,n);
	printf("Min cua mang la %d \n",Min);
}
