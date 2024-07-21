template<class S, class T>
ostream& operator<<(ostream& os, pair<S,T>& p){
  return os << p.FF << " " << p.SS;
}