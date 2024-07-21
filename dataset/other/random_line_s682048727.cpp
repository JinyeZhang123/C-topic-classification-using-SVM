template<class T> ostream &operator<<(ostream& os,vector<T>const& v){for(auto const& vi:v)os<<(vi==INF?"_":to_string(vi))<<" ";return os;}
