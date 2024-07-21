template <class It>
long long merge_sort(It l, It r) {
	if (r - l <= 1)return 0;
	long long cnt = 0;
	It m = l + (r - l) / 2;
	cnt += merge_sort(l, m);
	cnt += merge_sort(m, r);
	cnt += merge(l, m, r);
	return cnt;
}