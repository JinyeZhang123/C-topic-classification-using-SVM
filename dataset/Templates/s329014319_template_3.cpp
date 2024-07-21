template<class OutputIterator>
auto merge_sort(OutputIterator first, OutputIterator last)->ull {
//	std::cout <<"range: "<< std::distance(first, last) << "\n";
	if (first < last - 1) {
		auto mid = first + std::distance(first, last) / 2;
		auto lc = merge_sort(first, mid);
		auto rc = merge_sort(mid, last);
		return merge(first, mid, last) + lc + rc;
	}