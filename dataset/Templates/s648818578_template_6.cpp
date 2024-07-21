template <typename Iter>
void println_(Iter bgn, Iter end) {
    print_to_(std::cout, "\n", "\n", bgn, end);
}