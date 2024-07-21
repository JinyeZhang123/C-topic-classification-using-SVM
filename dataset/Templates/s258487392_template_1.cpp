template<typename T>
istream& operator>>(istream& is, vector<T>& vec) {
    EACH(x,vec) is >> x;
    return is;
}