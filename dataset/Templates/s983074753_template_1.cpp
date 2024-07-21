template<typename T>istream& operator>>(istream&i,vector<T>&v)
{rep(j,sz(v))i>>v[j];return i;}