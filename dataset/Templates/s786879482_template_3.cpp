template<typename T >
    void swap(vector<T>& v, size_t i, size_t j) {
        T tmp = v[i];
        v[i] = v[j];
        v[j] = tmp;
    }