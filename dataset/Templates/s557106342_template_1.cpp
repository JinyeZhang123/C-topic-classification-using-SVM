template<typename T>
int32_t partition(vector<T> &A, int32_t p, int32_t r) {
    T x = A[r];
    int32_t i = p - 1;

    for (int32_t j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }