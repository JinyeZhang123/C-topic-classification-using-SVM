template<class T> class treap{
public:
	struct node{
		T val,sum,mini,maxi;
		node *left , *right;
		int pri;
		unsigned sz;
		node(T val,int pri):val(val),sum(val),mini(val),maxi(val),pri(pri),sz(1){
			left = right = NULL;
		}