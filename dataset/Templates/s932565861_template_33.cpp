template <class Head, class... Tail>
void PRINT2(Head head, Tail... tail) {
    PRINT2(head);
    cout << " ";
    PRINT2((tail)...);
}