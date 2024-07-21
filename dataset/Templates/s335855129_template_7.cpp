template<typename T>
class SegmentTree{
	T def_value;
	int last_num;
	vector<T> element,lazy;
	vector<bool> lazy_flag;
	unique_ptr<RangeQuery<T>> range_query;
public:
	SegmentTree(vector<T>& vec,T def):def_value(def){
		int N=vec.size();
		last_num=1;
		while(last_num<N) last_num <<= 1;
		element.resize(2*last_num-1,def);
		lazy.resize(2*last_num-1,0);
		lazy_flag.resize(2*last_num-1,false);

		range_query = make_unique<RangeAddQuery<T>>();

		for(int i=0;i<N;i++){
			element[i+last_num-1] = vec[i];
		}