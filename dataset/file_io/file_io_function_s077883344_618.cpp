int main() {
	ofstream ofs("a.txt");
	int n,k;
	cin>>n>>k;
	init_fact(n);
	int i_max=min(k,n-1);
	ll ans=0;
	for (int i = 0; i <=i_max; i++){
		ofs<<i<<endl;
		ll tmp=nCr(n,min(i,n-i))*nCr(n-1,min(i,n-i-1));
		tmp%=MOD;
		ans+=tmp;ans%=MOD;
	}