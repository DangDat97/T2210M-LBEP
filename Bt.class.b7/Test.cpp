#include <stdio.h>

main(){
	int n=0;
	for(int i=1; i+n<=1000; i++){
		n+=i;
	}
	n=n+n+1;
	printf("%d",n);
}
