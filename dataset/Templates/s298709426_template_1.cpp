template<typename T>
void maxHeapify(vector<T> &A, int32_t i) {
    int32_t l = 2*i+1, r = 2*i+2, largest = i;
    if (l < A.size() && A[l] > A[largest]) largest = l;
    if (r < A.size() && A[r] > A[largest]) largest = r;

    if (largest != i) {
        swap(A[largest], A[i]);
        maxHeapify(A, largest);
    }