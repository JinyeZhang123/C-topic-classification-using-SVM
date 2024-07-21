template <typename T>
void print_to(std::ostream &os, const char *, const char *tail, const T &fst) {
    os << fst << tail;
}