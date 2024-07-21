template<class T> T min(const typename vector<T>::iterator& begin, const typename vector<T>::iterator& end) {
    return *min_element(begin, end);
}