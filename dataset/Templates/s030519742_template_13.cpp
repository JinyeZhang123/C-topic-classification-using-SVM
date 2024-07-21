template<class T> class SegmentTreeBeats {
	T inf;
	size_t length;
	vector<T>
	node_max_first,node_max_second,count_max_first,
	node_min_first,node_min_second,count_min_first,
	node_sum,lazy_add,lazy_update;
	vector<pair<int,int>> range;
	stack<int> down,up;
	inline void internal_chmax(int k, long long x) {
		node_sum[k] += (x - node_max_first[k]) * count_max_first[k];
		if(node_max_first[k] == node_min_first[k]) node_max_first[k] = node_min_first[k] = x;
		else if(node_max_first[k] == node_min_second[k]) node_max_first[k] = node_min_second[k] = x;
		else node_max_first[k] = x;
		if(lazy_update[k] != inf && x < lazy_update[k]) lazy_update[k] = x;
	}