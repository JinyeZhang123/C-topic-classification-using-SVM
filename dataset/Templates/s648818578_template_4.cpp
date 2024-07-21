template <typename Fst, typename... Rst>
void println(const Fst &fst, const Rst &... rst) {
    print_to(std::cout, "\n", "\n", fst, rst...);
}