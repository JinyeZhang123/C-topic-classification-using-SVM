template <class T> auto MIN(T& seq) {
    return *min_element(seq.begin(), seq.end());
}