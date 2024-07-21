template<typename T>void rd(T &x){
	x=0;int f=1;
	char c=getchar();
	for(;!isdigit(c);c=getchar()) if (c=='-') f=-1;
	for(;isdigit(c);c=getchar()) x=x*10+c-48;
	x*=f;
}