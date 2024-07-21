template <typename T>
inline T read(){
	T x=0,f=1;char c=getchar();
	while(!isdigit(c)){	if(c=='-') f=-f;c=getchar();}