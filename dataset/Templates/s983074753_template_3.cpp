template<typename T>ostream& operator<<(ostream&o,vector<T>&v)
{if(sz(v))o<<join(v);return o;}