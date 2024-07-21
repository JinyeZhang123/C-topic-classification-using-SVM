template <class T>
ostream& operator<<(ostream& os, vector<T> xs){ for(T x: xs) os << x << ' '; return os; }