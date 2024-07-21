template<class T> T min(const vector<T>& v) {
    return *min_element(v.begin(), v.end());
}