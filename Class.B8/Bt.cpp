#include <stdio.h>

float tbcsl(int arr[],int n) {
 int i;
 int d=0;
 float tbc, sum = 0.0;
 for (i = 0; i < n; ++i) {
 	if(arr[i]%2!=0){
 		sum += arr[i];
 		d++;
	} 
 }
 if(d==0){
 	return tbc=0;
 }
 tbc = (sum / d);
 return tbc;
}


float tbcslvtc(int arr[],int n) {
 int i;
 int d=0;
 float tbc, sum = 0.0;
 for (i = 0; i < n; ++i) {
 	if(arr[i]%2!=0&&i%2==0){
 		sum += arr[i];
 		d++;
	}
 }
 if(d==0){
 	return tbc=0;
 }
 tbc = (sum / d);
 return tbc;
}


float tslcc(int arr[],int n) {
 int i;
 int d=0;
 float tbc, sum = 0.0;
 for (i = n; i >= 0; i--) {
 	if(arr[i]%2!=0){
 		return arr[i]; 
	}
 }
	return 0;
}


bool timn(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return true;
		}
	}
	return false;
}



int main(){
//	int ary[10];
//	int high;
//	for(int i=0 ; i<10;i++){
//		scanf("%d",&ary[i]);
//	}
//	
//	
	int n;
	do{
		printf("Nhap so luong so trong mang \n");
		scanf("%d",&n);
	}while(n<=0);
	
	
	
	printf("Nhap cac so trong mang \n");
	int ary[n];
	for(int i=0 ; i<n;i++){
		scanf("%d",&ary[i]);
	}
	
	
	float tb=tbcsl(ary,n);
	float tb2=tbcslvtc(ary,n);
	printf("\n Trung binh so le tron mang la %f",tb);
	printf("\n Trung binh so le co vi tri chan trong mang la %f",tb2);
	
	
	int x;
	printf("\n Nhap so can ktra trong mang \n");
	scanf("%d",&x);
	if(timn(ary,n,x)){
		printf("%d co trong mang \n",x);
	}else{
		printf("%d ko co trong mang \n",x);
	}
	int slcc=tslcc(ary,n);
	if(slcc==0){
		printf("Mang ko co so le \n");
	}else{
		printf("%d la so le cuoi cung trong mang \n",slcc);
	}
	
//	high= ary[0];
//	int high2=ary[0];
//	for(int i=1;i<10;i++){
//		if(ary[i]>high)
//			high=ary[i];
//	}
//
//	for(int j=1;j<10;j++){
//		if(ary[j]<high&&high2<ary[j]){
//			high2=ary[j];
//		}
//	}
//	
//	printf("\n Highest value entered was %d",high);
//	printf("\n Highest value entered was %d",high2);
}
