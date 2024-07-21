Matrix operator*(Matrix &a, Matrix &b) {
	int n=a.size(),m=b[0].size(),z=a[0].size();
	Matrix r(n,vector<ll>(m));
	forn(i,n)forn(j,m)forn(k,z)
		r[i][j]+=a[i][k]*b[k][j],r[i][j]%=mod;
	return r;
}