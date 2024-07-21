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
    for(int i=1; i<66666; i++){
    	if(floor(i*1.08) == n){
    		cout << i << endl;
    		return 0;
    	}