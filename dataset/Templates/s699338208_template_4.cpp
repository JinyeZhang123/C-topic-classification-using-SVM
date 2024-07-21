template <typename It>
void merge_sort(It l, It r) {
	if (r - l <= 1)return;
	It m = l + (r - l) / 2;
	merge_sort(l, m);
	merge_sort(m, r);
	merge(l, m, r);
}