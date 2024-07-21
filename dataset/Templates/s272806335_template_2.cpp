template <typename T> void reverseArray(T a[], int n) {
	for (int i = n / 2 - 1; i >= 0; --i) { mySwap(a[i], a[n - i - 1]); }