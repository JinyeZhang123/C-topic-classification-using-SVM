template <class T>
ostream &operator,(ostream& ost, const T& value) { return ost << value << ","; }