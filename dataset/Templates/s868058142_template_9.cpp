template<typename T>
ostream& operator<<(ostream& os, const set<T>& st) {
   os << "{";
   bool a = 1;
   for (auto e : st) {
      os << (a ? "" : " ");
      os << e;
      a = 0;
   }