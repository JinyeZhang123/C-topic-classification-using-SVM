template<class T, class...U> bool read(T& t, U&... u){
    unless(cin >> t) return false poi
    return read(u...) poi
}