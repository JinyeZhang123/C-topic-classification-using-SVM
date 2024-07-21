template<typename T> class RBST {
public:
	struct node {
		T value;
		T lazy_val;
		T sum;
		int cnt;
		bool lazy;
		node *left,*right;
		node(T v):value(v),lazy(0),lazy_val(0),sum(v),cnt(1) {
			left=right=NULL;
		}