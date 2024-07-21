template <class S, class T>
ostream& operator<<(ostream& out, const map<S, T>& mp) {
    out << "{ ";
    for (auto it = mp.begin(); it != mp.end(); it++) {
        out << it->first << ":" << it->second;
        if (mp.size() - 1 != distance(mp.begin(), it)) out << ", ";
    }