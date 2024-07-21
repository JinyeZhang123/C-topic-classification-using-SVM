template<typename T>
    int run_selection_sort(vector<T>& v) {
        int count = 0;
        for (size_t i = 0; i < v.size(); i++) {
            size_t min = i;
            for (size_t j = i; j < v.size(); j++) {
                if (v[j] < v[min])
                    min = j;
            }