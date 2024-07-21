int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
#ifdef LOCAL
	std::ifstream in("in");
	std::cin.rdbuf(in.rdbuf());
#endif

	string s;
	int N;
	cin >> N >> s;
	int last = 0;
	for(int i = 2; i < N; i++){
		dp[i] = dp[i - 1];
		if(s[i - 2] == '1' && s[i - 1] == '0' && s[i] == '1'){
			last = i;
			for(int j = i - 2; j >= 0; j--){
				if(s[j] == '0') break;
				dp[i] = max(dp[i], dp[j - 1] + i - j - 1);
			}