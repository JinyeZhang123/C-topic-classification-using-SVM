template<typename T>
int32_t insertion_sort(vector<T> &v, int64_t g) {
    int32_t count = 0;
    for (int64_t i = g; i < (int64_t) v.size(); i++) {
        int64_t val = v[i];
        int64_t j = i - g;
        while (j >= 0 && v[j] > val) {
            v[j + g] = v[j];
            j = j - g;
            count++;
        }