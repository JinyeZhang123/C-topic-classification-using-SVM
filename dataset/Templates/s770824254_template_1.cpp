template<typename T>
string toString(const T& x) {
  ostringstream os; os << x; return os.str();
}