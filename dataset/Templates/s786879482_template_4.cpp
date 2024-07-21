template<typename T >
    bool is_stable(vector<T>& src, vector<T>& sorted,
                   function<bool(const T&, const T&)> same_value, function<bool(const T&, const T&)> identical) {
        for (auto it = sorted.begin(); it != sorted.end()-1; it++) {
            T current = *it;
            T next = *(it+1);

            if (same_value(current,next)) {
                size_t current_idx = 0;
                for (size_t i = 0; i < src.size(); i++){
                    if (identical(src[i], current)) {
                        current_idx = i;
                        break;
                    }