template <typename T,typename S> // pair
ostream& operator<<(ostream& os, pair<T,S> const&P){os<<P.FI<<' '<<P.SE;return os;}