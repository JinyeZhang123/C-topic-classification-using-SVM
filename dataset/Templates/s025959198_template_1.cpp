template <typename T>
class Seg_Tree{
public: // 0-index
	vector<T> dat;
	T initial,M;
	int n;
	T unite(T a,T b){//
		return max(a,b);
	}