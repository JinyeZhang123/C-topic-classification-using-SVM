template <typename T, T INIT>
struct node {
	T v, lazy;
	node(){
		v = INIT;
		lazy = 0;
	}