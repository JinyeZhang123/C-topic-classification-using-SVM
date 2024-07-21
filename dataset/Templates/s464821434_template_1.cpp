template <class T, class S> inline bool chmax(T &a, S b) {
    if(a < b) {a = b;return 1;}