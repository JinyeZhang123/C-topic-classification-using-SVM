template <class Iterator>
int sum(Iterator first, Iterator last) {
	int sum = 0;
	for (; first != last; ++first) { sum += *first; }