template<typename Monoid,typename OperatorMonoid,typename F,typename G,typename H>
struct Segtree{
	int size=1;
	vector<Monoid>dat;
	vector<OperatorMonoid>lazy;
	const F f;
	const G g;
	const H h;
	Monoid M;
	OperatorMonoid OM;
	void set(int a,Monoid x){
		dat[a+size-1]=x;
	}