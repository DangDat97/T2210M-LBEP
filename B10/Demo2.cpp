#include <stdio.h>
typedef struct SinhVien{ // Typedef dinh nghia lai kieu du lieu theo ten moi typedef struct Tencu{}TenMoi -> Ten Moi
	char tensv[30];
	char email[20];
	int diemthi;
}SV;

int main(){
	SV sv3; // Doi lai kieu goi ten
	
	struct SinhVien sv1;
	scanf("%s",sv1.tensv);
	scanf("%d",&sv1.tensv);
	
	struct SinhVien sv2;
	scanf("%s",sv2.tensv);
	
	struct SinhVien t2210m[26];
	
	for(int i=0 ; i<26; i++){
		scanf("%s",t2210m[i].tensv);
		scanf("%d",&t2210m[i].diemthi);
	}
	
	
}
