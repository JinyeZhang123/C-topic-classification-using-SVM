int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
	int N,M,C;
    cin >> N >> M >> C;
    vector<int>B(M);
    for(int i = 0; i < M; i++) {
        cin >> B[i];
    }