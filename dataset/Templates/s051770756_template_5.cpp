template<typename T>
void insertion_sort(std::vector<T>&& ary, int g, int& cnt) {
    int n = ary.size();
    for (int i = g; i < n; i++) {
        int target = ary[i];
        int j = i - g;
        while(j >= 0 && ary[j] > target) {
            ary[j + g] = ary[j];
            cnt++;
            j -= g;
        }