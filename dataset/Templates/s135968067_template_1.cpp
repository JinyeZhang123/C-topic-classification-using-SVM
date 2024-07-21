template<typename T>
int64_t merge(vector<T> &A, int32_t left, int32_t mid, int32_t right) {
    int32_t n1 = mid - left;
    int32_t n2 = right - mid;

    vector<T> L(n1+1);
    vector<T> R(n2+1);
    for (int32_t i = 0; i < n1; i++) {
        L[i] = A[left+i];
    }