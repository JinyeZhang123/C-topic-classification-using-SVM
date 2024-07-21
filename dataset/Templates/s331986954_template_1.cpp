template<typename M, typename T>
struct lazy_segment_tree{
	typedef function<M(M, M)> F;
	typedef function<M(M, T)> EVAL;
	typedef function<T(T, T)> G;
	int size;//2冪
	vector<M> val;//1-indexed
	vector<T> lazy;//遅延情報を入れる
	F f;//結合関数
	EVAL eval;//モノイドに作用素を作用させる関数
	G g;//作用素の結合関数 A->Bの順に作用させるとg(A, B)
	M em;//モノイドの単位元
	T et;//作用素の単位元

	lazy_segment_tree(int N, vector<M> &data, F f, EVAL eval, G g, M em, T et) : f(f), eval(eval), g(g), em(em), et(et){
		size = 1;
		while(size < N) size *= 2;
		val.assign(2 * size, em);
		lazy.assign(2 * size, et);
		for(int i = 0; i < N; i++) val[size + i] = data[i];
		for(int i = N; i < size; i++) val[size + i] = em;
		for(int i = size - 1; i > 0; i--) val[i] = f(val[2 * i], val[2 * i + 1]);
	}