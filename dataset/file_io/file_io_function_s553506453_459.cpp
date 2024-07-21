int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//ofstream cout ("fileName.txt");
	//ifstream cin ("fileName.txt");
	
	int N, x;
	cin >> N;
	vi v(N);
	
	cin >> v[0];
	x=v[0];

	for(int i=1; i<N; ++i) cin >> v[i], x^=v[i];
	
	for(int i=0; i<N; ++i) {
		cout<<(v[i]^x)<<" ";
	}