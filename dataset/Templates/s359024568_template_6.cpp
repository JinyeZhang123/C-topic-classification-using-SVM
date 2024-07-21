template <typename T>
int find_left(vector<T>& v, T elem) {
    return (int)(upper_bound(v.begin(), v.end(), elem) - v.begin()) - 1;
}