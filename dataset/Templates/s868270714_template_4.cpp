template<class A, class B>
    istream &operator>>(istream &in, pair<A, B> &a) {
        in >> a.first >> a.second;
        return in;
    }