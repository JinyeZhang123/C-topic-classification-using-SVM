template<class T> ostream& operator<<(ostream &os, vector<T> vect) {
    os<<"PRINT VECTOR\n";
    for(auto x:vect) os <<x<< " ";
    return os << "";
}