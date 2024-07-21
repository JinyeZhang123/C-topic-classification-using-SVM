template <typename T, typename U>
istream &operator>>(istream &is, pair<T,U> &p_var) {
    is >> p_var.first >> p_var.second;
    return is;
}