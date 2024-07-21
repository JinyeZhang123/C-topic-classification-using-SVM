template<typename T>
UniquePointer<Vector<T>> readVector(usize num) {
    UniquePointer<Vector<T>> list(new Vector<T>(num));
    rep(i, num) {
        cin >> (*list)[i];
    }