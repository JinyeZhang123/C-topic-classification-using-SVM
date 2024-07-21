template<typename T>
void quickSort(vector<T> &B, int p, int r) {
	if (p < r) {
		int q = partition(B, p, r);
		quickSort(B, p, q - 1);
		quickSort(B, q + 1 , r);
	}