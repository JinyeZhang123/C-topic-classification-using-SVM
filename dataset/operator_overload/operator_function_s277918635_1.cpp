bool operator<(const wolf&a,const wolf&b){
	return a.b*(b.a+1)+b.b+b.a< b.b*(a.a+1)+a.b+a.a;
}