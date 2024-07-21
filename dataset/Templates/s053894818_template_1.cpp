template<typename T>
istream& operator>>(istream& is, vector<T>& vec) {
    each(x,vec) is >> x;
    return is;
}