template<class A>
    istream &operator>>(istream &in, vector<A> &a) {
        for (A &x: a) in >> x;
        return in;
    }