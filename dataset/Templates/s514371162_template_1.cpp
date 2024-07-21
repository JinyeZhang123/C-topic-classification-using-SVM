template<class T> struct Prim {
	Prim(const Graph & es, const vector<T> & ws) : g(es.size()) {
		typedef uint32_t U;
		typedef tuple<T, U, U, U> P;
		U n = es.size();
		vector<U> unexp(n, 1);
		priority_queue<P, vector<P>, greater<P>> q; q.emplace(0, n, 0, 0);
		while (!q.empty()) {
			T w; U u, v, i; tie(w, u, v, i) = q.top(); q.pop();
			if (unexp[v]) {
				unexp[v] = 0;
				if (u != n) { g[u].push_back({ v, i }