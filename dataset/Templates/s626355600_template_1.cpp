template <class T> auto MAX(T& seq) {
    return *max_element(seq.begin(), seq.end());
}