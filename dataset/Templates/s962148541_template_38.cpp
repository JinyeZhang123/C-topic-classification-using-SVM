template <size_t N, class Head>
void PRINT2(array<Head, N> head) {
    for (auto i = head.begin(); i != head.end(); i++) {
        PRINT2(*i);
        if (i != head.end() - 1) { cout << " "; }