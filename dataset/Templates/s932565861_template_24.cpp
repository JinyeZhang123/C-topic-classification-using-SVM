template <class T1, class T2, class T3>
void PRINT2(tuple<T1, T2, T3> t) {
    PRINT2(get<0>(t), get<1>(t), get<2>(t));
}