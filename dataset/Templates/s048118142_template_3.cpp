template<typename T>
ostream& operator<<(ostream& os, const vector< vector<T> >& vec) {
    rep(i,vec.size()) {
        if (i) os << endl;
        os << vec[i];
    }