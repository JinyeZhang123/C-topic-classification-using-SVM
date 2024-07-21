template<class OutputIterator, class F>
auto merge_sort(OutputIterator first, OutputIterator last, F compare) {

	const auto beg = first;
	const auto en = last;
	const auto mid = beg + std::distance(beg, en) / 2;

	// 
	if (!(beg < en - 1))	return ull{}