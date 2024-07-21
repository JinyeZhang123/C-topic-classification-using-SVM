template<class T>
void _E(vector<T> x) {
    cerr << "[";
    for (auto it = x.begin(); it != x.end(); ++it) {
        if (it != x.begin()) cerr << ", ";
        _E(*it);
    }