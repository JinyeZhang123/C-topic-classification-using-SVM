template<class T> T min_index(const vector<T>& v) {
    return distance(v.begin(), min_element(v.begin(), v.end()));
}