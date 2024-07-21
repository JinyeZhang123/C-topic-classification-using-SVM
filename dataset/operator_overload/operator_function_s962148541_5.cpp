string operator*(const string l, const size_t& r) {
    string str = l;
    for (size_t i = 0; i < r; i++) { str += l; }