template <typename T>
ostream &operator<<(ostream &os, vector<T> &v) {
    if (v.size()) {
        os << v.front();
        for (auto vi = v.begin() + 1; vi != v.end(); vi++)
            os << " " << *vi;
    }