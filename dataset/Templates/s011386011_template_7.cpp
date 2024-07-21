template<class T> T sum(const typename vector<T>::iterator& begin, const typename vector<T>::iterator& end) {
    T ans = T();
    for(typename vector<T>::iterator t = begin; t != end; t++) ans += *t;
    return ans;
}