template <class T>
vec3<T> vec3_init(int n0, int n1, int n2, T x = 0) {
    return vec3<T>(n0, vec2_init(n1, n2, x));
}