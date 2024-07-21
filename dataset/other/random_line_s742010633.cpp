	lazy_segment_tree(const vector<T1>& data_) : n(size(data_.size())), data(n * 2, M::id1()), lazy(n * 2, M::id2()) {
