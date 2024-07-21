int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
//	ifstream cin("input.txt");
//	ofstream cout("output.txt");
	
	int n,l,t; cin >> n >> l >> t;
	vector<int> x(n), w(n);
	int aci=-1, cc=0;
	for(int i=0;i<n;i++){
		cin >> x[i] >> w[i];
		if(w[i]==2)
			aci=i;
		else
			cc++;
	}