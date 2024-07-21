template <class T>
vec2<T> vec2_init(int n0, int n1, T x = 0) {
    return vec2<T>(n0, vector<T>(n1, x));
}