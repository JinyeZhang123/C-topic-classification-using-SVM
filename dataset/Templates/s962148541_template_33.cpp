template <class T1, class T2, class T3, class T4, class T5>
void PRINT2(tuple<T1, T2, T3, T4, T5> t) {
    PRINT2(get<0>(t), get<1>(t), get<2>(t), get<3>(t), get<4>(t));
}