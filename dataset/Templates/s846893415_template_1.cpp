template <typename T,
          template <typename V, typename = std::allocator<V>> class U>
void p(const U<T>& v)
{
    for (size_t i = 0; i < v.size() - 1; ++i) {
        printf("%d ", v[i]);
    }