template<class T> istream& operator>>(istream& is, vector<T>& vs) {
        for (auto it = vs.begin(); it != vs.end(); it++) is >> *it;
        return is;
    }