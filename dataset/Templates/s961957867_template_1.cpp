template <typename T1, typename T2>
inline void amin(T1& a, T2 const& b) {
    if (a > b) a = b;
}