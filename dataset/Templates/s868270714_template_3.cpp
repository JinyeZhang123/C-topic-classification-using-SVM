template<class A>
    ostream &operator<<(ostream &out, vector<A> a) {
        for (A x: a) out << x << ' ';
        return out;
    }