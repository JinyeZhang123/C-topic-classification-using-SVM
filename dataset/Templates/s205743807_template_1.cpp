template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec)
    { for (auto v : vec) os << v << ' '; os << '\n'; return os; }