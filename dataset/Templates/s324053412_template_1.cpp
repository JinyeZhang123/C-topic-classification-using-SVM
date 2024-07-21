template<typename T>
class lazy_segment_tree{
	int n;
	T fval;
	vector<T> dat, lazy;
	vector<bool> lazyFlag;
	
public:
	
	lazy_segment_tree(){
		
	}