template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec) {
    REP(i,vec.size()) {
        if (i) os << " ";
        os << vec[i];
    }