template<class T> struct Kruskal{
	typedef uint32_t U;
	template<class V> Kruskal(U n, const V & u, const V & v, const vector<T> & w) : g(n) {
		vector<U> es(w.size());
		iota(es.begin(), es.end(), 0);
		sort(es.begin(), es.end(), [&](U i, U j) { return w[i] < w[j]; }