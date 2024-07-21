template <typename It>
void merge(It l, It m, It r) {
	vector<int> tmp(r - l);
	It it = tmp.begin(), it1 = l, it2 = m;
	while (it1 != m && it2 != r) {
		cnt++;
		if (*it1 < *it2)
			*it++ = *it1++;
		else
			*it++ = *it2++;
	}