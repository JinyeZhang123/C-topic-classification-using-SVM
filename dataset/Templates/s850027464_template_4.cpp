template<typename T>
T mypow(T a, lint b) {
	T res(1);
	while(b){
		if(b&1)res*=a;
		a*=a;
		b>>=1;
	}