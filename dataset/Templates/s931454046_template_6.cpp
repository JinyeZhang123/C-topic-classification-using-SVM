template<typename M>
ostream& operator<<(ostream&os, const vector<vector<M>> &v){for(auto it: v)os << it;return os;}