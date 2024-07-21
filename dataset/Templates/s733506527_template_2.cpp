template<typename T>
void mergeSort(vector<T> &A, int left, int right) {
	if (left + 1 < right) {
		auto mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);

		merge(A, left, mid, right);
	}