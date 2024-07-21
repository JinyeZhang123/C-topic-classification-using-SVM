template<typename T>
    int run_bubble_sort(vector<T>& v) {
        int count = 0;
        for (size_t i = 0; i < v.size(); i++) {
            for (size_t j = v.size() - 1; j > i; j--) {
                if (v[j] < v[j-1]) {
                    count++;
                    util::swap(v,j,j-1);
                }