template<int N>
struct sieve {
	bool s[N];
	int v[N], l = -1;
	constexpr sieve() : s(), v() {
		for (int i = 0; i < N; i++)
			s[i] = true;
		for (int i = 4; i < N; i += 2)
			s[i] = false;
		for (int i = 9; i < N; i += 6)
			s[i] = false;
		for (int i = 6, e = sqrt(N); i <= e; i += 6) {
			for (int j : {i - 1, i + 1}