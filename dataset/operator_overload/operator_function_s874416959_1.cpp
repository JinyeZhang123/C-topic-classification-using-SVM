string operator &(const string &a,const string &b){
	R int n=a.length();string c(n,'0');
	fp(i,0,n-1)c[i]=(a[i]=='1'&&b[i]=='1'?'1':'0');
	return c;
}