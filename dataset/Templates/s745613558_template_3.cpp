template<class T, class M>
class LazySegtree {
public:
	vector<T> seg;
	vector<M> lazy;   //実、更新の必要性
	typedef function<T(T, T)> TT;
	typedef function<T(M, T, int)> MT;
	typedef function<M(M, M)> MM;
	TT tt;
	MT mt;
	MM mm;
	M Me;
	T Te;
	int snum;   //何回シフトで下段から1に行けるか
	LazySegtree(int N, TT _tt, MT _mtn, MM _mm, T te, M me) {
		int RN = 1;
		snum = 0;
		while (RN < N) {
			RN *= 2;
			snum++;
		}