template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cout << "[" << *it << ": " << a << "]\t";
    err(++it, args...);
}