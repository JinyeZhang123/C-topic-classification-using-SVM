template <class T>
    void print_vec(const std::vector<T>& vec, const char* sep = " ", const char* term = "\n") const {
        const size_t sz = vec.size();
        for (size_t i = 0; i < sz; i++) std::cout << vec[i] << (i == sz - 1 ? term : sep);
    }