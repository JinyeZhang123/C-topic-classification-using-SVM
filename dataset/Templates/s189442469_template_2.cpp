template <class T>
bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }