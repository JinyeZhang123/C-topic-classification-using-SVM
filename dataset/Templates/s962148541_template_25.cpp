template <class T1, class T2, class T3, class T4>
void INPUT(tuple<T1, T2, T3, T4>& t) {
    cin >> get<0>(t) >> get<1>(t) >> get<2>(t) >> get<3>(t);
}