#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	int h;
	while(i<=n){
		if(i%2==0&&i%3==0){
			h=i;	
		}
		i++;
	}
	printf("%d ,",h);
}
