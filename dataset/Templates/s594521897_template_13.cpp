template<class T> T max_index(const vector<T>& v) {
    return distance(v.begin(), max_element(v.begin(), v.end()));
}