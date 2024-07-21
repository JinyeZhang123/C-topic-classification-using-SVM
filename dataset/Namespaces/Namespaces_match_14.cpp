namespace std {
    template<typename T>ostream&operator<<(ostream&os, vector<T>const&v){
        iter(it,v) os<<*it<<(it+1==v.end()?"":",");
        return os;
    }