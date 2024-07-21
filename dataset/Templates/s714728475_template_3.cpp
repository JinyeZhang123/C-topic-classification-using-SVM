template <class It>
long long merge(It l, It m, It r) {
	long long cnt = 0;
	vector<int> tmp(r - l);
	It it = tmp.begin(), it1 = l, it2 = m;
	while (it1 != m && it2 != r) {
		if (*it1 < *it2)
			*it++ = *it1++;
		else
			*it++ = *it2++, cnt += m - it1;
	}