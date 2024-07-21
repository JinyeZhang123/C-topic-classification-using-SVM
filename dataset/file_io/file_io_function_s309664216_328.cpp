int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
   int k,n;
   cin >> k >> n;
   std::vector<int> a;
   for(int i=0; i<n; i++){
   		int x;
   		cin >> x;
   		a.push_back(x);
   }