template <class Head, class... Tail>
inline void COUT(Head &&head, Tail &&... tail) {
    cout << (head) << " ";
    COUT(forward<Tail>(tail)...);
}