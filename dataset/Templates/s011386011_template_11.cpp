template<class T> T max(const typename vector<T>::iterator& begin, const typename vector<T>::iterator& end) {
    return *max_element(begin, end);
}