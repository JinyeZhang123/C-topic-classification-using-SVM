template<typename T>string join(vector<T>&v)
{stringstream s;rep(i,sz(v))s<<' '<<v[i];return s.str().substr(1);}