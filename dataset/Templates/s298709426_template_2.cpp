template<typename T>
void buildMaxHeap(vector<T> &A) {
    for (int32_t i = A.size() / 2; i >= 0; i--) {
        maxHeapify(A, i);
    }