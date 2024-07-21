int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
	string s;
    cin >> s;
    string t = "ATCG";
    int ans = 0;
    int now = 0;
    
    for (int i = 0; i < s.size(); i++) {
        bool isATCG = false;
        
        for (int j = 0; j < t.size(); j++) {
            if (s[i] == t[j]) {
                isATCG = true;
            }