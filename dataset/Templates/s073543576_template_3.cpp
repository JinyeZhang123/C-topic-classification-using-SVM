template <typename T>
void merge(T A[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;

	T *L = new T[n1 + 1];
	T *R = new T[n2 + 1];


	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}