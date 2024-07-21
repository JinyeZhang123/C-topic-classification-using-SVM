template<class T> T max(const vector<T>& v) {
    return *max_element(v.begin(), v.end());
}