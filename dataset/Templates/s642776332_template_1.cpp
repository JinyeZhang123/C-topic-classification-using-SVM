template <class T> T read(T &a) {
    a=0;char x=getchar();bool f=0;
    for(;x<'0'||x>'9';x=getchar())f|=x=='-';
	for(;x>='0'&&x<='9';x=getchar())a=(a<<3)+(a<<1)+x-'0';
    if(f)a=-a;
    return a;
}