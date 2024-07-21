Poly operator*(const Poly&a,const Poly&b){
	Poly c;
	for(int i=0;i<=lim;i++) for(int j=0;j<=i;j++) c[i]=(c[i]+a[j]*b[i-j]%mod)%mod;
	return c;
}