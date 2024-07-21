template <typename T,typename S>
ostream& operator<<(ostream& os, pair<T,S> const&P){os<<P.FI<<' '<<P.SE;return os;}