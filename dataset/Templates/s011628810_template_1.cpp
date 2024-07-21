template <typename T,typename E>
struct SegmentTree{
	typedef function<T(T,T)> F;
	typedef function<T(T,E)> G;
	typedef function<E(E,E)> H;
	typedef function<E(E,int)> P;
	int n;
	F f;
	G g;
	H h;
	P p;
	T d1;
	E d0;
	vector<T> dat;
	vector<E> laz;

	SegmentTree(int n_,
				F f,//要素と要素をマージする関数
				G g,//要素に作用素を作用させる関数
				H h,//作用素と作用素をマージする関数
				T d1,//要素のモノイド
				E d0,//作用素のモノイド
				vector<T> v=vector<T>(),
				P p=[](E a,int b){return a;}