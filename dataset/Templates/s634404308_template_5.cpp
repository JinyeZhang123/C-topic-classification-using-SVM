template<class T>
struct segtree{
private:
	T init;
	int n;
	function<T(T,T)> op;
	vector<T>arr;
	vector<T>st;
	vector<T>lz;
	void build(int lo,int hi,int u){
		if(lo==hi){
			st[u]=arr[lo];
		}