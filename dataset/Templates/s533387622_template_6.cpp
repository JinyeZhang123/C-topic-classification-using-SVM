template <class T, std::size_t I>
struct ArrType<T, I> { using t = std::array<T, I>; }