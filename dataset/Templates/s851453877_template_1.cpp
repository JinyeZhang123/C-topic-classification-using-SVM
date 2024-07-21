template<class T> ostream& operator<<(ostream& os, const vector<T>& vs) {
        if (vs.empty()) return os << "[]";
        auto i = vs.begin();
        os << "[" << *i;
        for (++i; i != vs.end(); ++i) os << " " << *i;
        return os << "]";
    }