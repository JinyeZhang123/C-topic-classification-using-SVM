template<typename T, typename... Args>
inline void __trace(vector<string>::iterator it, T a, Args... args) {
    cerr << it->substr((*it)[0] == ' ', it->length()) << "=";
    __trace_out_var(a);
    cerr << "; ";
    __trace(++it, args...);
}