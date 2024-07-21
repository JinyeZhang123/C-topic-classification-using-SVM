template<typename T>
int64_t merge_sort(vector<T> &A, int32_t left, int32_t right) {
    if (left + 1 < right) {
        int32_t mid = left + (right - left) / 2;
        int64_t count1 = merge_sort(A, left, mid);
        int64_t count2 = merge_sort(A, mid, right);
        int64_t count3 = merge(A, left, mid, right);
        return count1 + count2 + count3;
    }