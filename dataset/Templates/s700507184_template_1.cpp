template<class T>
struct segtree
{
	vector<T> t;
	vector<T> lazy;
	segtree(int a, T val)
	{
		t.assign(4*a,val);
		lazy.assign(4*a,0);
	}