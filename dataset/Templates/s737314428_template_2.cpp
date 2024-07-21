template<typename T, typename... Args>
void dbg(istream_iterator<string> it, T a, Args... args) {cerr << *it << " = " << a << endl;dbg(++it, args...);}