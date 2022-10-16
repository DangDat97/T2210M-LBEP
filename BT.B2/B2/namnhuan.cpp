#include <stdio.h>
int main(){
	int y;
	scanf("%d",&y);
	
	if(y%400==0){
		printf("%d la nam nhuan ",y);
	}else{
		if(y%100==0){
			printf("%d ko la nam nhuan ",y);
		}else{
			if(y%4==0){
				printf("%d la nam nhuan ",y);
			}else{
				printf("%d ko la nam nhuan ",y);
			}
		}
	}
	
}
