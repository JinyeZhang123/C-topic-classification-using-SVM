int main() {
#ifdef HOME
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i, n;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

   	
    cin >> n;

    ll ans = 0;
    for(i = 0; i < n; i++) {
    	string str;
    	cin >> str;

    	int sz = (int)str.size();

    	ll value = 0;
    	int pos = 0;

    	while(pos < sz && str[pos] != '.') {
    		value = value * 10 + str[pos] - '0';
    		pos++;
    	}