template <typename Iter>
void print_to_(std::ostream &os, const char *del, const char *tail, Iter bgn, Iter end) {
    for (Iter it = bgn; it != end;) {
        os << *it;
        if (++it != end) {
            os << del;
        }