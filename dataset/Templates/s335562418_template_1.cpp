template<typename T>
struct lazysegtree{
	function<T(T,T)>calcfn,lazycalcfn;
	function<T(T,T,unsigned int)>updatefn;
	int n;
	T defvalue,lazydefvalue;
	vector<T>dat,lazy;
	vector<bool>lazyflag;
	lazysegtree(int n_=0,T defvalue_=0,
		function<T(T,T)>calcfn_=[](T a,T b){return a+b;}