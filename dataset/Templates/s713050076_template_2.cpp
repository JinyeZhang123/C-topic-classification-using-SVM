template <typename T, typename NODE=node<T> >
class SegTree{
public:
	vector<NODE> data;
	int N;
	SegTree(int _N){
		// _N <= (N = 2^k) ???????????????
		N = 1;
		while( N < _N ) N<<=1;
		data.resize(N*2+5);
	}