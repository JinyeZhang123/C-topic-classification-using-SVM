template<class A, class B>
    ostream &operator<<(ostream &out, pair<A, B> a) {
        out << a.first << " " << a.second;
        return out;
    }