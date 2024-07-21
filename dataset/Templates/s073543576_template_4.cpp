template <typename T>
void mergeSort(T A[], int left, int right)
{
	if (left + 1 < right) {
		int mid = (right + left) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}