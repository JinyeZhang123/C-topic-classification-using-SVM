template<typename T>
struct segment_tree {
    long long N; // 木の頂点数
    long long M; // 葉の数
    std::vector<T> V; // セグメント木　1-indexed
	std::vector<T> W; // 遅延配列　1-indexed
	std::vector<bool> flag; // true : W[i] の子孫に更新していない遅延配列が存在
    std::function<T(T, T)> op1; // 二項演算
	std::function<T(T, T, T)> op2; // 遅延伝播用の二項演算
	std::function<T(T, T)> op3; // 遅延配列更新用の二項演算
    T id1; // 単位元
	T id2; // 遅延伝播用の単位元

    // ===============================================================

    segment_tree(
		std::vector<T>& a,
		std::function<T(T, T)> f,
		std::function<T(T, T, T)> g,
		std::function<T(T, T)> h,
		T t1, T t2
	) : op1(f), op2(g), op3(h), id1(t1), id2(t2) {
        M = 1;
        while (M < a.size()) M *= 2;
        N = 2 * M;
        V.resize(N, id1); W.resize(N, id2); flag.resize(N, false);
        for (long long i = 0; i < a.size(); i++) V[M + i] = a[i];
        for (long long i = M - 1; i > 0; i--) {
            V[i] = op1(V[2 * i], V[2 * i + 1]);
        }