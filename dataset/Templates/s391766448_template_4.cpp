template<typename T>
T mypow(T a, unsigned int b) {
	T res(1),now(a);
	while(b){
		if(b&1)res*=now;
		b>>=1;
		now*=now;
	}