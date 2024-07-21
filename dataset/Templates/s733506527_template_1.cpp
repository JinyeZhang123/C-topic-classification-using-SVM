template<typename T>
void merge(vector<T> &A, int left, int mid, int right) {
	auto n1 = mid - left;
	auto n2 = right - mid;
	vector<T> L(n1);
	vector<T> R(n2);

	copy(A.begin() + left, A.begin() + mid, L.begin());
	copy(A.begin() + mid, A.begin() + right, R.begin());

	L.push_back(make_pair(INF + 5, 'Z'));
	R.push_back(make_pair(INF + 5, 'Z'));

	for (int i = 0, j = 0, k = left; k<right; k++) {
		if (L[i].first <= R[j].first) {
			A[k] = L[i];
			i++;
		}