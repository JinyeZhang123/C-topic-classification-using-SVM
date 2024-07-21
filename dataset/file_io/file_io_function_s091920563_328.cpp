int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
   int n;
   cin >> n;
   int a[n];
   int sum1 = 0;
   int sum2 = 0;
   for(int i=0; i<n; i++){
   	cin >> a[i];
   }