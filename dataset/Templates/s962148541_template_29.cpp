template <class T1>
void PRINT2(tuple<T1> t) {
    PRINT2(get<0>(t));
}