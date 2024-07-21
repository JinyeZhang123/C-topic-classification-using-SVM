template<typename T, typename U>ostream&operator<<(ostream&os,const pair<T,U>&p){
        return os << "[" << p.dirst << "," << p.second << "]";
    }