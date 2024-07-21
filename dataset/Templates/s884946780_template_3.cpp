template<class T, class...U> typename enable_if<is_same<T, line>::value, string>::type next(istream& in, const U&... args) {
    string s;
    getline(in, s, args...);
    return move(s);
}