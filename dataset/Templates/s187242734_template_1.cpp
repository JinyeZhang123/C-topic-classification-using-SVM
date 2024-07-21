template<typename T>inline void read(T& x){
	x=0;int f=1;
	char c=getchar();
	while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}