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
    bool ans = false;
    for(int i=1; i<10; i++){
    	for(int j=1; j<10; j++){
    		if(i*j == n){
    			ans = true;
    		}