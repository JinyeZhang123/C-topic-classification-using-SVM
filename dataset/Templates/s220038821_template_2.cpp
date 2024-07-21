template <class T>
void SegmentTree<T>::init (int n_) {
    n = 1;
    while (n < n_ + 1) n *= 2;
    data.resize(n * 2);
    for (int i = 0; i < data.size(); i++) data[i] = 0;
}