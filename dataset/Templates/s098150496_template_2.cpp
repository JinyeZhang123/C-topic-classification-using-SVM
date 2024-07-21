template<typename T>
void quick_sort(vector<T> &A, int32_t p, int32_t r) {
    if (p < r) {
        int32_t q = partition(A, p, r);
        quick_sort(A, p, q-1);
        quick_sort(A, q+1, r);
    }