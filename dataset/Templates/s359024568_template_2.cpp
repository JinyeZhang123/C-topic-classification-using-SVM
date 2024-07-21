template <typename T1, typename T2>
inline void amax(T1& a, T2 const& b) {
    if (a < b) a = b;
}