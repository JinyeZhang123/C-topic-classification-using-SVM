template <typename Fst, typename... Rst>
void print(const Fst &fst, const Rst &... rst) {
    print_to(std::cout, " ", "\n", fst, rst...);
}