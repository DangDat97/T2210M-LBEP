#include <stdio.h>
int main(){
	
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<5;i++){
		if(i%2==0){
				printf("*");
			}
		for(int j=0;j<4;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(int i=0;i<6;i++){
		for(int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(int i=0;i<6;i++){
		for(int j=0;j<i;j++){
			for(int z=0; z<i;z++){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}

	
	
	
}
