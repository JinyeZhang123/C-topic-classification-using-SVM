template <typename Tuple, std::size_t N>
struct __TuplePrinter__ {
    static void print(std::ostream &os, const Tuple &t) {
        __TuplePrinter__<Tuple, N - 1>::print(os, t);
        os << ", " << std::get<N - 1>(t);
    }