template <class T, size_t I, size_t... J>
struct ArrType { using t = std::array<typename ArrType<T, J...>::t, I>; }