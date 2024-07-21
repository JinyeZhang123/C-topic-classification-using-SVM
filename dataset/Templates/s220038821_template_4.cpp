template <class T>
int SegmentTree<T>::query (int a_, int b_, int k_, int l_, int r_) {
    if (r_ <= a_ || b_ <= l_) return 0;

    if (a_ <= l_ && r_ <= b_) {
        return data[k_];
    }