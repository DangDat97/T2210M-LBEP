int chuvi(int a,int b, int c){
	int p=a+b+c;
	return p;
}

float dientich(int a,int b, int c){
	float p= a+b+c/ 2.0;
	float s= sqrt(p*(p - a)*(p - b)*(p - c));
    return s;
}

int Total(int n){
	int t=0;
	for(n;n!=0;n=n/10){
		int sd=n%10;
		t+=sd;
	}
	return t;
}

int ucln(int a, int b){
	int uc=0;
	for(int i=1;i<a;i++){
		if(a%i==0&&b%i==0){
			uc=i;
		}
	}
	return uc;
}

int bcnn(int a, int b){
	int bc=0;
	for(int i=b;i>=1;i--){
		if((a*i)%b==0){
			bc=a*i;
		}
	}
	return bc;
}

bool ktrSCP(int a){
	for(int i=0; i*i<=a;++i){
		if(i*i==a){
			return true;
		}
	}
	return false;
}


int findN(int n){
	for(int i=1; i+n<=1000; i++){
		n+=i;
	}
	n=n+n+1;
	return n;
}

bool ktrSN(int n){
	int t=0;
	for(n;n!=0;n=n/10){
		int sd=n%10;
		if(t>sd){
			return false;
		}
		t=sd;
	}
	return true;
}

