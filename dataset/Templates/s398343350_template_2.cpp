template<typename T>
void merge_sort(vector<T> & A, int left, int right){
    if (left + 1 < right){
        auto mid = (left + right) / 2;
        merge_sort(A, left, mid);
        merge_sort(A, mid, right);
        merge(A, left, mid, right);
    }