template <size_t N, class Head>
void INPUT(array<Head, N>& head) {
    for (size_t i = 0; i < head.size(); i++) { INPUT(head[i]); }