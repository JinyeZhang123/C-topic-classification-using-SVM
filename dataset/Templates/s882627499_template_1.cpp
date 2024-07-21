template <class H, class... T>
void dump_impl(string s, const H &head, const T&... tail) {
    int par = 0;
    rep(i, 0, sz(s)) {
        char ch = s[i];
        if (ch == ',' && par == 0) {
            cerr << " = " << head << ", ";
            dump_impl(s.substr(i + 1), tail...);
            return;
        }