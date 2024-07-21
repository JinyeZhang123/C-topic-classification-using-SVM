template<class T>
struct segtree{
	int n;
	function<T(T,T)> op;
	vector<T>arr;
	vector<T>st;
	void build(int lo,int hi,int u){
		if(lo==hi){
			st[u]=arr[lo];
		}