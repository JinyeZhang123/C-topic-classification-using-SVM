template <typename Fst, typename... Rst>
void print_to(std::ostream &os, const char *del, const char *tail, const Fst &fst, const Rst &... rst) {
    os << fst << del;
    print_to(os, del, tail, rst...);
}