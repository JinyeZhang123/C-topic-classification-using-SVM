template <typename Tuple>
struct __TuplePrinter__<Tuple, 1> {
    static void print(std::ostream &os, const Tuple &t) { os << std::get<0>(t); }