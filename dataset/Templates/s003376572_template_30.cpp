template <class T1, class T2>
void PRINT2(tuple<T1, T2> t) {
    PRINT2(get<0>(t), get<1>(t));
}