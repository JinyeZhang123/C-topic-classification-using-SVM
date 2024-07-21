template <typename T>
int find_right(vector<T>& v, T elem) {
    return (int)(lower_bound(v.begin(), v.end(), elem) - v.begin());
}