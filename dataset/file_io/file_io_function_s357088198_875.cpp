int main() {

	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	#ifdef LOCAL
	ifstream cin("sample.in");
	#endif

	F[0] = 1;
	for (int i = 1; i < MAXN; i++) F[i] = SMul(i, F[i - 1]);
	DP[0][0] = 1;
	for (int i = 1; i < MAXN; i++) {
		DP[i][0] = 1;
		for (int j = 1; 2 * j <= i; j++) DP[i][j] = SAdd(DP[i - 1][j], DP[i - 2][j - 1]);
	}