template <class S, class T>
string to_string(pair<S, T> p) { return "(" + to_string(p.first) + "," + to_string(p.second) + ")"; }