template<typename T>inline void write(T x,bool _enter=0,bool _space=0){
	if (!x)putchar('0');else{
		if(x<0)putchar('-'),x=-x;
		static char dig[41];
		int top=0;
		while(x)dig[++top]=(x%10)+'0',x/=10;
		while(top)putchar(dig[top--]);
	}