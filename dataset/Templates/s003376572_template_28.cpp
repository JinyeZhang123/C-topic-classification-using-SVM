template <class Head, class... Tail>
void INPUT(Head& head, Tail&... tail) {
    INPUT(head);
    INPUT((tail)...);
}