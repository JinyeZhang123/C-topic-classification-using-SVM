template<int N>
struct twin {
	int t[N/10], l;
	constexpr twin() : t(), l(1) {
		sieve<N> s;
		t[0] = 5;
		for (int i = 0; i < N; i++)
			if (s.s[i - 2] && s.s[i])
				t[l++] = i;
	}