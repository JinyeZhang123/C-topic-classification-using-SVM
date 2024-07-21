template<typename T> inline void print(const vector<T> &v, string s = " ") 
{ rep(i, v.size()) cout << v[i] << (i + 1 == v.size() ? "\n" : s); }