template<typename M>
ostream& operator<<(ostream&os, const vector<M> &v){for(auto it: v)os << it << ' ';cout << '\n';return os;}