Matrix operator*(Matrix &a, Matrix &b) {
	int n=sz(a),m=sz(b[0]),z=sz(a[0]);
	Matrix r(n,vl(m));
	fore(i,0,n)fore(j,0,m)fore(k,0,z)
		r[i][j]+=a[i][k]*b[k][j],r[i][j]%=MOD;
	return r;
}