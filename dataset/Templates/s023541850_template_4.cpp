template<class T, class U>
ostream & operator<<(ostream &os, pair<T,U> const &p){
    return os << "(" << p.first << ", " << p.second << ") ";
}