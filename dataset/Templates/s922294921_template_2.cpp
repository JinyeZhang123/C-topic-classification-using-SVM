template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v) { for(Int i = 0; i < (Int) v.size(); i++) os << v[i] << (i + 1 != v.size() ? " " : ""); return os; }