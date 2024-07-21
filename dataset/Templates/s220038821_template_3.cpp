template <class T>
void SegmentTree<T>::update (int k_, int l_) {
    for (int i = k_; i <= 1260 - 540 && i < l_; i++) {
        int tmp_ = i + n - 1;
        data[tmp_] = 1;
        while (tmp_) {
            tmp_ = (tmp_ - 1) / 2;
            data[tmp_] = data[tmp_ * 2 + 1] + data[tmp_ * 2 + 2];
        }