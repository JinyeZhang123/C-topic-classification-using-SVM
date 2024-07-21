template<class A, class B>
    ostream &operator<<(ostream &out, vector<pair<A, B>> a) {
        for (pair<A, B> x: a)
            out << x.first << " " << x.second << '\n';
        return out;
    }