#include <stdio.h>
#include <string.h>

void InHoa(char s[]){
	int n=strlen(s);
	for(int i=0; i<n;i++){
		if(s[i]<=122&&s[i]>=97){
			s[i]=s[i]-32;
		}
	}
}

int DemNguyenAm(char s[]){
	int na=0;
	for(int i=0; i <strlen(s);i++){
		if(s[i]==117||s[i]==101||s[i]==97||s[i]==105||s[i]==111){
			na++;
		}
	}
	return na;
}

int DemKhacNguyenAm(char s[]){
	int ktk=0;
	for(int i=0; i <strlen(s);i++){
		if(s[i]!=117&&s[i]!=101&&s[i]!=97&&s[i]!=105&&s[i]!=111){
			ktk++;
		}
		
	}
	return ktk;
}

bool ktrabtronga(char a[],char b[]){
	if(strlen(b)>strlen(a)){ // do dai cua b lon a -> Sai
		return false;
	}
	if(strcmp(a,b)==0){ // 2 chuoi giong nhau -> dung
		return true;
	}
	// do dai a lon hon b -> So sanh tiep
	if(strchr(a,b[0])== 0){ // Ko tim thay vi tri cua gtri dau tien cua chuoi b -> Sai
		return false;
	}
	
		int kt1=0;
		int kt2=0;
		for(int j=0; j<strlen(a);j++){ // Tim vitri cua ki tu dau tien trong a so sanh tiep cac vi tri sau
			if(a[j]==b[0]){
				for(int i=0; i<strlen(b);i++){ //so sanh tiep cac vi tri sau
					int dem=j+i;
					if(b[i]==a[dem]){
						kt1++;
					}else{
						kt1=0;
						break;
					}
				}
				if(kt1==strlen(b)){
					kt2++;
				}
			}
		}
		if(kt2==0){
			return false;
		}else{
			return true;
		}
		
}


int main(){
	char a[50];
	char b[50];
	printf("Nhap vao chuoi a; \n");
	scanf("%s",a);
	printf("Nhap vao chuoi b; \n");
	scanf("%s",b);
	
	if(ktrabtronga(a,b)){
		printf("Chuoi b nam trong chuoi a");
	}else{
		printf("Chuoi b ko nam trong chuoi a");
	}
	
	
}
