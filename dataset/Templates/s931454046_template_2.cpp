template<typename M>
istream& operator>>(istream&is, vector<M> & v){for(auto &it:v) is >> it; return is; }