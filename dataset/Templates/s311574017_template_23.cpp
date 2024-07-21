template <class T1, class T2>
void INPUT(tuple<T1, T2>& t) {
    cin >> get<0>(t) >> get<1>(t);
}