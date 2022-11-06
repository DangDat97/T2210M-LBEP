#include <stdio.h>
#include <string.h>

int SLSNLTNN(int a[],int n){
	int sl=0;
	int ktr=0;
	for(int i=0; i<n;i++){
		if(a[i]>=0){
			sl++;
		}else{
			if(ktr<sl){
				ktr=sl;
			}
			sl=0;
		}
	}
	return ktr;
}



int TSNLTNN(int a[],int n){
	int sl=0;
	int t=0;
	int total;
	int ktr=0;
	for(int i=0; i<n;i++){
		if(a[i]>=0){
			sl++;
			t+=a[i];
		}else{
			if(ktr<sl){
				ktr=sl;
				total=t;
			}
			sl=0;
			t=0;
		}
	}
	return total;
}


int main(){
	int n;
	printf("Nhap vao so n \n");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap vao day so \n");
	for(int i; i<n; i++){
		scanf("%d",&arr[i]);
	}
	int slln=TSNLTNN(arr,n);
	printf("so luong so duong lien tiep nhieu nhat la %f \n",&slln);
	
}
