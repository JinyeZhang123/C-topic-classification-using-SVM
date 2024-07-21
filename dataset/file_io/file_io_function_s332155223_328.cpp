int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

//ifstream cin (".in");
//ofstream cout (".out");
int n,k;
cin >> n >> k;
int ans = 0;
int maxi = 0;
for(int i=0; i<n; i++){
	int a;
	cin >> a;
	ans+=min(a,abs(k-a));
		
  }