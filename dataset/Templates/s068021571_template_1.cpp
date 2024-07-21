template<class T>
struct Treap{
	struct node_t{
		T val;
		T sum;
		node_t *lch,*rch;
		int pri;
		int cnt;
		node_t(T v,int p):val(v),pri(p),cnt(1),sum(v){lch=rch=NULL;}