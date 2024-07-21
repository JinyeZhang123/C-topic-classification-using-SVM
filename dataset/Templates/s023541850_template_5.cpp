template<class T>
ostream & operator<<(ostream &os, vector<T> const &v){
    rep(i,v.size()) os << v[i] << (i+1==(int)v.size()?"":" "); return os;
}