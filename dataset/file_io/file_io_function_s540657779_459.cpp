int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//ofstream cout ("fileName.txt");
	//ifstream cin ("fileName.txt");

	int ans=-1;
	
	for(int i=0; i<5; ++i) {
		ll n;
		cin >> n;
		if(n==0) ans=i+1;
	}