template <int N, int S>
struct Trie {
	int tot;
	int ed[N], ch[N][S];
	inline void insert(const std::string &s) {
		int u = 0;
		for (const auto &cur: s) {
			int v = cur - 'a';
			if (!ch[u][v]) ch[u][v] = ++tot;
			u = ch[u][v];
		}