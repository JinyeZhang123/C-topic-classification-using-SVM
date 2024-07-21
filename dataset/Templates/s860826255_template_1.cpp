template<class T>
bool umax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }