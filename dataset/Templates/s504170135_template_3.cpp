template <typename T>
int getFormer(const vector<T> &vec, T x) {
    return upper_bound(vec.begin(), vec.end(), x) - vec.begin() - 1;
}