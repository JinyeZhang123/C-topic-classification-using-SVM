template <typename T>
int partition(T A[], int p, int r)
{
	T x = A[r];
	int i = p - 1;

	for (int j = p; j < r; j++) {
		if (A[j] <= x) {
			i++;
			T tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}