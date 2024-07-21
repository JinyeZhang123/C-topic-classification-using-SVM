int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
	//int t;
	//cin >> t;
	//while(t--){
	int n,a,b;
	cin >> n >> a >> b;
	string s;
	int pa = 0,pb = 0;
	for(int i=0; i<n; i++){
		cin >> s;
		if(s[i] == 'a' && pa+pb<a+b){ 
			pa++;
			cout << "Yes\n";
		}