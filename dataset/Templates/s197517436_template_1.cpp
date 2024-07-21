template<class T>
ostream &operator<<(ostream &os, const vector <T> &v) {
    os << "[";
    for (int i=0; i<(((int)(v).size())); ++i) {
        if (i) os << ", ";
        os << v[i];
    }