int reverse(int n){
	int sn=0;
	for(n;n!=0;n=n/10){
		int sd=n%10;
		sn=sn*10+sd;
	}
	return sn;
}

int max3(int a,int b, int c){
	int sl=0;
	if(a>sl){
		sl=a;
	}
	if(b>sl){
		sl=b;
	}
	if(c>sl){
		sl=c;
	}
	return sl;
}

int num_in_F(int n){
	int f0 = 0;
    int f1 = 1;
    int fn = 1;
	for(int i=3;i<=n;i++){
		f0=f1;
		f1=fn;
		fn=f0+f1;
	}
	return fn;
}

int total(int n){
	int t=0;
	for(int i=1;i<=n;i++){
		t+=i;
	}
	return t;
}

bool ktrSoNto(int n){
	int h=0;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0){
			h++;
		}
	}
	if(h==0){
		return true;
	}
	return false;
}

double total_on(int n){
	double t=0.000;
	for(int i=1;i<=n;i++){
		t+=(double)1/i;
	}
	return t;
}
