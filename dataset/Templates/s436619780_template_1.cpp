template<typename T>
struct dualsegtree{
	function<T(T,T)>lazycalcfn,updatefn;
	int n;
	T lazydefvalue;
	vector<T>dat,lazy;
	vector<bool>lazyflag;
	dualsegtree(int n_=0,T defvalue=0,
		function<T(T,T)>lazycalcfn_=[](T a,T b){return a+b;}