template<class T>
ostream& operator<<(ostream& os, const vector<T>& x){
    for(auto&& t: x)
        os << t << ' ';
    return os;
}