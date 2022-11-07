#include <stdio.h>

int main(){
	int n=10;
	int arr[n];
	printf("Nhap vao day so \n");
	for(int i=0;i<n;i++){
		printf("a[%d] = ", i+1);
        scanf("%d", &arr[i]);
	}
	
	printf("Cac phan tu cua mang: \n");
    for (int i = n-1; i >= 0; i--) {
        printf("%d \n", arr[i]);
    }
}
