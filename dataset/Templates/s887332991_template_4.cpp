template <typename T>
int getLatter(const vector<T> &vec, T x) {
    return lower_bound(vec.begin(), vec.end(), x) - vec.begin();
}