template<class T> ostream& operator<<(ostream &os, set<T> S){
    os << "{ ";
    for(auto x:S) os<<x<<" ";
    return os<<"}